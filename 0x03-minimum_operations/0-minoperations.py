#!/usr/bin/python3
""" Finds min number of operations needed """


def minOperations(n):
    starting = 1
    clipboard = starting
    operations = 0
    if n == 0:
        return 0
    while starting != n:
        """ COPY ALL"""
        if starting * 2 < n:
            clipboard = starting
            operations = operations + 1
        """ PASTE """
        starting = starting + clipboard
        operations = operations + 1
    return operations
