#!/usr/bin/python3
""" Finds min number of operations needed """


def minOperations(n):
    ops = 0
    if n == 0 or n == 1:
        return 0
    while n > 1:
        for p_factor in range(2, n + 1):
            if n % p_factor == 0:
                ops += p_factor
                n //= p_factor
                break
    return ops
