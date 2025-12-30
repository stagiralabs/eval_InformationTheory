#!/usr/bin/env python3
"""
Transform @[to_additive...]\n@[target] patterns into @[target, to_additive...] patterns.

This handles multi-line to_additive decorators with nested brackets.
"""

import re
import os
from pathlib import Path


def find_matching_bracket(content: str, start: int) -> int:
    """Find the index of the closing bracket that matches the opening bracket at position start.

    Handles nested brackets properly.
    """
    if content[start] != '[':
        raise ValueError(f"Expected '[' at position {start}, got '{content[start]}'")

    depth = 1
    i = start + 1
    in_string = False
    string_char = None

    while i < len(content) and depth > 0:
        char = content[i]

        # Handle string literals
        if not in_string and char in '"\'':
            in_string = True
            string_char = char
        elif in_string and char == string_char:
            # Check for escape
            if i > 0 and content[i-1] != '\\':
                in_string = False
                string_char = None
        elif not in_string:
            if char == '[':
                depth += 1
            elif char == ']':
                depth -= 1
        i += 1

    if depth != 0:
        return -1
    return i - 1  # Return index of closing bracket


def fix_file(filepath: str) -> int:
    """Fix the decorator patterns in a single file.

    Returns the number of replacements made.
    """
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()

    count = 0
    new_content = []
    i = 0

    while i < len(content):
        # Look for @[to_additive
        if content[i:i+2] == '@[':
            # Check if this is to_additive
            bracket_start = i + 1
            # Find the start of to_additive after @[
            rest = content[i+2:]
            match = re.match(r'\s*(to_additive)', rest)

            if match:
                # Find the matching closing bracket
                close_bracket = find_matching_bracket(content, bracket_start)
                if close_bracket > 0:
                    # Extract the full to_additive decorator content (without @[ and ])
                    decorator_content = content[bracket_start + 1:close_bracket]

                    # Check what comes after the closing bracket
                    after_bracket = content[close_bracket + 1:]

                    # Look for whitespace/newline followed by @[target]
                    target_match = re.match(r'(\s*\n\s*)@\[target\]', after_bracket)

                    if target_match:
                        # Found the pattern! Transform it
                        whitespace_before_target = target_match.group(1)
                        # Get the leading whitespace on the @[target] line
                        leading_ws = ''
                        ws = whitespace_before_target
                        newline_idx = ws.rfind('\n')
                        if newline_idx >= 0:
                            leading_ws = ws[newline_idx + 1:]

                        # Build the new decorator
                        new_decorator = f'{leading_ws}@[target, {decorator_content}]'
                        new_content.append(new_decorator)

                        # Skip past the @[target]
                        i = close_bracket + 1 + target_match.end()
                        count += 1
                        continue

        new_content.append(content[i])
        i += 1

    if count > 0:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(''.join(new_content))
        print(f"Fixed {count} instance(s) in {filepath}")

    return count


def main():
    algebra_dir = Path("/data/user_data/shivansg/mathlib4_v4.17.0/Mathlib/Algebra")

    total_fixes = 0
    files_fixed = 0

    for filepath in algebra_dir.rglob("*.lean"):
        fixes = fix_file(str(filepath))
        if fixes > 0:
            total_fixes += fixes
            files_fixed += 1

    print(f"\nTotal: Fixed {total_fixes} instances in {files_fixed} files")


if __name__ == "__main__":
    main()
