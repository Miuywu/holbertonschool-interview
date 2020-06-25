#!/usr/bin/python3
"""UTF8"""


def validUTF8(data):
    """Checks UTF-8 format"""
    bit = 0

    for number in data:
        if bit:
            bit -= 1
            if (((n & 0xff) >> 6) != 2):
                return False
        elif (n & 0xF0) == 0xF0:
            bit = 3
        elif (n & 0xE0) == 0xE0:
            bit = 2
        elif (n & 0xC0) == 0xC0:
            bit = 1
        elif not (n & 0x80):
            bit = 0
        else:
            return False
    return not bit
