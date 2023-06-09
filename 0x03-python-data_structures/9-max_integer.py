#!/usr/bin/python3
def max_integer(my_list=[]):
    if my_list:

        MAX = my_list[0]
        for x in my_list:

            if x > MAX:
                MAX = x

        return (MAX)
    return (None)
