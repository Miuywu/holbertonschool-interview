#!/usr/bin/python3
""" Finds min number of operations needed """


def minOperations(n):
    starting = 1
    clipboard = -1
    operations = 0
    if n == 0:
        return 0
    while starting != n:
        """ COPY ALL"""
        if starting * 2 < n:
            clipboard = starting
            starting = starting + clipboard
            operations = operations + 2
        """ PASTE """
        if clipboard != -1:
            starting = starting + clipboard
            operations = operations + 1
    return operations
