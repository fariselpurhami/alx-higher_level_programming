#!/usr/bin/python3
def complex_delete(a_dictionary, value):

    [a_dictionary.pop(key) for key in a_dictionary.copy() if a_dictionary[key] == value]

    return (a_dictionary)
