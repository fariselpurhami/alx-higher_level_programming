#!/usr/bin/python3
from sys import argv

if (__name__ == "__main__)":
    sum = len(argv)
    add = 0

    if (sum == 1):
        print("{}".format(add))

    else:
        for w in range(1, sum):
            add += int(argv.__getitem__(w))
        print("{}".format(add))
