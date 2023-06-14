#!/usr/bin/python3
def roman_to_int(roman_string):

    x = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
    }
    i = 0
    z = 0

    if type(roman_string) is str and roman_string:

        for e in range(len(roman_string) - 1, -1, -1):

            if x[roman_string[e]] >= z:
                i += x[roman_string[e]]
            else:
                i -= x[roman_string[e]]
            z = x[roman_string[e]]

        return (i)
