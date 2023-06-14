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

    out = 0
    z = 0

    if type(roman_string) is str and roman_string:
        for w in range(len(roman_string) - 1, -1, -1):

            if x[roman_string[w]] >= z:
                out += x[roman_string[w]]

            else:
                out -= x[roman_string[w]]
            z = x[roman_string[w]]

        return (out)
