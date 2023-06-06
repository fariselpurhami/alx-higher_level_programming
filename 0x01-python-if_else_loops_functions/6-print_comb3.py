#!/usr/bin/python3
for w in range(0, 10):
    for o in range(1, 10):
        if w >= o:
            continue
        elif w == 8 and o == 9:
            print("{}{}".format(w, o))
        else:
            print("{}{}, ".format(w, o), end="")
