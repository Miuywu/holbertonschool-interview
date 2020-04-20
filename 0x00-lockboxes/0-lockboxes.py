#!/usr/bin/python3


def canUnlockAll(boxes):
    i = 0
    keys = []
    for box in boxes:
        if box == boxes[len(boxes) - 1]:
            break
        if i == 0:
            for new_keys in box:
                if new_keys not in keys:
                    keys.append(new_keys)
            i += 1
            continue
        for key in keys:
            tmp = []
            if key < len(boxes) - 1:
                for new_keys in boxes[key]:
                    tmp.append(new_keys)
            for new_keys in tmp:
                if new_keys not in keys:
                    keys.append(new_keys)
        if i + 1 not in keys:
            return False
        i += 1
    return True


