#!/usr/bin/python3
""" Finds min number of operations needed """


def minOperations(n):
    star = 1
    clip = 1
    ops = 0
    if n == 0:
        return 0
    while star <= n:
        if star * 2 < n:
            clip = star
            ops += 1
        star += clip
        ops += 1
    return ops - 1