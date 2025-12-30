#!/usr/bin/env python3
"""
Transform @[to_additive...]\n@[target] patterns into @[target, to_additive...] patterns.

This script finds all instances where:
  @[to_additive ...]
  @[target]

And transforms them into:
  @[target, to_additive ...]
"""

import re
import os
import sys
from pathlib import Path


def fix_file(filepath: str) -> int:
    """Fix the decorator patterns in a single file.

    Returns the number of replacements made.
    """
    with open(filepath, 'r', encoding='utf-8') as f:
        content = f.read()

    # Pattern to match:
    # @[to_additive followed by anything until the closing ], then newline(s) and whitespace, then @[target]
    # The to_additive decorator can span multiple lines and contain various content

    pattern = r'@\[\s*(to_additive[^\]]*)\]\s*\n(\s*)@\[target\]'

    def replacement(match):
        to_additive_content = match.group(1)
        whitespace = match.group(2)
        # Return the combined decorator: @[target, to_additive...]
        return f'{whitespace}@[target, {to_additive_content}]'

    new_content, count = re.subn(pattern, replacement, content)

    if count > 0:
        with open(filepath, 'w', encoding='utf-8') as f:
            f.write(new_content)
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
