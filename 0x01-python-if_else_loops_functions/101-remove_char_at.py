#!/usr/bin/python3
def remove_char_at(str, n):
    nstr = ""
    for w in range(len(str)):
        if w == n:
            continue
        else:
            nstr += str[w]
    return nstr
