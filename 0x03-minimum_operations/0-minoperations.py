#!/usr/bin/python3
def minOperations(n):
    starting = 1
    clipboard = starting
    operations = 0
    while starting != n:
        """ COPY ALL"""
        if starting * 2 < n:
            clipboard = starting
            operations = operations + 1
        """ PASTE """
        starting = starting + clipboard
        operations = operations + 1
    return operations
