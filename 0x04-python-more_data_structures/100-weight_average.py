#!/usr/bin/python3
def weight_average(my_list=[]):

    if not my_list:

        return (0)

    else:

        a = 0
        v = 0

        for c in my_list:

            a += (c[1])
            v += (c[0] * c[1])

    return (v / a)
