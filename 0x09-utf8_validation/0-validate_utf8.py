#!/usr/bin/python3
"""UTF8"""


def validUTF8(data):
    """Checks UTF-8 format"""
    bit = 0
    for byte in data:
        if bit:
            if byte >> 6 != 0b10:
                return False
            bit -= 1
        else:
            if byte >> 7 == 0:
                continue
            elif byte >> 3 == 0b11110:
                bit = 3
            elif byte >> 4 == 0b1110:
                bit = 2
            elif byte >> 5 == 0b110:
                bit = 1
            else:
                return False
    return bit == 0
