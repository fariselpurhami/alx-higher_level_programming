#!/usr/bin/python3
for w in range(122, 96, -1):
    if w % 2 == 0:
        o = chr(w)
    else:
        o = chr(w-32)
    print("{}".format(o), end="")
