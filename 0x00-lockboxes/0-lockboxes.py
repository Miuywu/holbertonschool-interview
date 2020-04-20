#!/usr/bin/python3


def canUnlockAll(boxes):
    i = 0
    keys = [0]
    for box in boxes:
        if i == len(boxes) - 1:
            """print("done!")"""
            break
        """print("need ", i + 1, ", ", end='')"""
        if box != []:
            for key in keys:
                tmp = []
                if key < len(boxes) - 1:
                    for new_keys in boxes[key]:
                        tmp.append(new_keys)
                for new_keys in tmp:
                    if new_keys not in keys:
                        keys.append(new_keys)
        if i + 1 not in keys:
            """print(keys)"""
            return False
        else:
            """print(i + 1, " found!")"""
        i += 1
    """print(keys)"""
    return True


