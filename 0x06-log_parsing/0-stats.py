#!/usr/bin/python3
"""reads stdin line by line and computes metrics."""
import sys


if __name__ == '__main__':
    status_codes = ["200", "301", "400", "401", "403", "404", "405", "500"]
    stats = {k: 0 for k in status_codes}
    size, reset = 0, 0

    def print_stats(stats: dict, size: int) -> None:
        print("File size: {:d}".format(size))
        for k, v in sorted(stats.items()):
            if v:
                print("{}: {}".format(k, v))
    try:
        for line in sys.stdin:
            reset += 1
            data = line.split()
            try:
                status_code = data[-2]
                if status_code in stats:
                    stats[status_code] += 1
            except BaseException:
                pass
            try:
                size += int(data[-1])
            except BaseException:
                pass
            if reset % 10 == 0:
                print("File size: {:d}".format(size))
                for k, v in sorted(stats.items()):
                    if v:
                        print("{}: {}".format(k, v))
        print("File size: {:d}".format(size))
        for k, v in sorted(stats.items()):
            if v:
                print("{}: {}".format(k, v))
    except KeyboardInterrupt:
        print("File size: {:d}".format(size))
        for k, v in sorted(stats.items()):
            if v:
                print("{}: {}".format(k, v))
        raise
