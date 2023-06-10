#!/usr/bin/env python3
def no_c(my_string):

    new_str = ''
    for w in range(len(my_string)):

        if my_string[w] == 'C' or my_string[w] == 'c':
            pass

        else:
            new_str += my_string[w]

    return (new_str)
