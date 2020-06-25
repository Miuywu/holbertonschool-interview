#!/usr/bin/python3
"""UTF8"""


def validUTF8(data):
    '''Checks UTF-8 format'''
    bit = 0

    for number in data:
        if bit:
            bit -= 1
            if (((n & 0xff) >> 6) != 2):
                return False
        elif (n & 0xF0) == 0xF0:  """4"""
            bit = 3
        elif (n & 0xE0) == 0xE0:  """3"""
            bit = 2
        elif (n & 0xC0) == 0xC0:  """2"""
            bit = 1
        elif not (n & 0x80):      """1"""
            bit = 0
        else:
            return False
    return bit == 0