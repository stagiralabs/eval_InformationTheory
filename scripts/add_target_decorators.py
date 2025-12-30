#!/usr/bin/env python3
"""
Script to add @[target] decorator to a random percentage (60-100%) of theorems/lemmas
in Lean files in Mathlib/Algebra.
"""

import os
import random
import re
import sys

def is_multiline_decorator(lines, decorator_start_idx):
    """Check if a decorator spans multiple lines by looking for unbalanced brackets."""
    line = lines[decorator_start_idx]
    # Count brackets
    open_brackets = line.count('[')
    close_brackets = line.count(']')

    # If brackets are balanced on the same line, it's single-line
    if open_brackets == close_brackets and open_brackets > 0:
        return False

    # If we have more opening than closing, it's multi-line
    if open_brackets > close_brackets:
        return True

    return False

def find_decorator_line(lines, theorem_idx):
    """
    Find the decorator line for a theorem/lemma at theorem_idx.
    Returns (decorator_line_idx, is_multiline) or (None, False) if no decorator.
    """
    # Look backwards from theorem line to find decorator
    idx = theorem_idx - 1
    while idx >= 0:
        line = lines[idx].strip()

        # Skip empty lines and doc comments
        if line == '' or line.startswith('/-') or line.startswith('-/') or line.startswith('--'):
            idx -= 1
            continue

        # Check if this line ends with a decorator (starts with @[)
        if line.startswith('@['):
            return idx, is_multiline_decorator(lines, idx)

        # If we hit something else, no decorator
        break

    return None, False

def process_file(filepath):
    """Process a single Lean file, adding @[target] to random theorems/lemmas."""
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()

    lines = content.split('\n')

    # Find all theorem/lemma declarations (not inside comments)
    # Match lines that start with 'theorem' or 'lemma' (possibly with indentation)
    theorem_pattern = re.compile(r'^(\s*)(theorem|lemma)\s+(\w+)')

    theorem_indices = []
    in_block_comment = False

    for i, line in enumerate(lines):
        # Track block comments
        if '/-' in line and '-/' not in line:
            in_block_comment = True
        if '-/' in line:
            in_block_comment = False
            continue
        if in_block_comment:
            continue

        # Skip line comments
        stripped = line.lstrip()
        if stripped.startswith('--'):
            continue

        match = theorem_pattern.match(line)
        if match:
            theorem_indices.append(i)

    if not theorem_indices:
        return 0, 0  # No theorems found

    # Generate random percentage between 60-100%
    target_percentage = random.randint(60, 100)
    num_to_target = max(1, int(len(theorem_indices) * target_percentage / 100))

    # Randomly select which theorems to add @[target] to
    selected_indices = random.sample(theorem_indices, min(num_to_target, len(theorem_indices)))

    # Sort in reverse order so we can modify from bottom to top without affecting indices
    selected_indices.sort(reverse=True)

    modified_count = 0

    for theorem_idx in selected_indices:
        decorator_idx, is_multiline = find_decorator_line(lines, theorem_idx)

        if is_multiline:
            # Skip multi-line decorators
            continue

        if decorator_idx is not None:
            # Has existing single-line decorator - prepend 'target, ' to it
            old_line = lines[decorator_idx]
            # Find the position after @[
            bracket_pos = old_line.find('@[')
            if bracket_pos != -1:
                insert_pos = bracket_pos + 2
                new_line = old_line[:insert_pos] + 'target, ' + old_line[insert_pos:]
                lines[decorator_idx] = new_line
                modified_count += 1
        else:
            # No decorator - add @[target] on line before theorem
            indent = ''
            theorem_line = lines[theorem_idx]
            # Get indentation from theorem line
            match = re.match(r'^(\s*)', theorem_line)
            if match:
                indent = match.group(1)

            new_decorator_line = indent + '@[target]'
            lines.insert(theorem_idx, new_decorator_line)
            modified_count += 1

    # Write back to file
    new_content = '\n'.join(lines)
    with open(filepath, 'w', encoding='utf-8') as f:
        f.write(new_content)

    return len(theorem_indices), modified_count

def main():
    algebra_dir = '/data/user_data/shivansg/mathlib4_v4.17.0/Mathlib/Algebra'

    total_files = 0
    total_theorems = 0
    total_modified = 0

    for root, dirs, files in os.walk(algebra_dir):
        for filename in files:
            if filename.endswith('.lean'):
                filepath = os.path.join(root, filename)
                try:
                    theorems, modified = process_file(filepath)
                    total_files += 1
                    total_theorems += theorems
                    total_modified += modified
                    if modified > 0:
                        print(f"Processed {filepath}: {modified}/{theorems} theorems/lemmas targeted")
                except Exception as e:
                    print(f"Error processing {filepath}: {e}", file=sys.stderr)

    print(f"\n=== Summary ===")
    print(f"Files processed: {total_files}")
    print(f"Total theorems/lemmas found: {total_theorems}")
    print(f"Total @[target] added: {total_modified}")

if __name__ == '__main__':
    main()
