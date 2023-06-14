#!/usr/bin/python3
def complex_delete(a_dictionary, value):

    [a_dictionary.pop(x) for x in a_dictionary.copy() if a_dictionary[x] == value]

    return (a_dictionary)
