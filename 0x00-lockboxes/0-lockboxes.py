#!/usr/bin/python3


def canUnlockAll(boxes):
    i = 0
    keys = [0]
    while i < len(boxes) - 1:
        for key in keys:
            tmp = []
            if key < len(boxes):
                for new_keys in boxes[key]:
                    tmp.append(new_keys)
            for new_keys in tmp:
                if new_keys not in keys:
                    keys.append(new_keys)
        i += 1
    for keys_needed in range(0, len(boxes) - 1):
        if keys_needed not in keys:
            return False
    return True


