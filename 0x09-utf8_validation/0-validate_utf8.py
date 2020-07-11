#!/usr/bin/python3
"""UTF8"""


def validUTF8(data):
    """Checks UTF-8 format"""
    try:
        bytes(x & 0xff for x in data).decode()
        return True
    except:
        return False
