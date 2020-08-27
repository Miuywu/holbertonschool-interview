#!/usr/bin/python3
"""rain walls"""


def rain(walls):
    """walls calc"""
    coll = 0
    for a in range(1, len(walls) - 1):
        left = max(walls[b] for b in range(a + 1))
        right = max(walls[b] for b in range(a, len(walls)))
        coll += min(left, right) - walls[a]
    return coll
