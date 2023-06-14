#!/usr/bin/python3
def weight_average(my_list=[]):

    if not my_list:

        return (0)

    else:

        e = 0
        x = 0

        for c in my_list:

            e += (c[1])
            x += (c[0] * c[1])

    return (x / e)
