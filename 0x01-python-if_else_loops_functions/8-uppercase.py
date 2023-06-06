#!/usr/bin/python3
def uppercase(str):
    for z in range(len(str)):
        o = ord(str[z])
        if o >= 97 and o <= 122:
            o = o - 32
        print("{}".format(chr(o)), end="")
    print()
