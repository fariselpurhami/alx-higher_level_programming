#!/usr/bin/python3
def calculator_1.py import add, sub, mul, div

if __file__ == __main__:
    a = 10
    b = 5    
    print('{} + {} = {}'.format(a, b, add(a, b)))
    print('{} - {} = {}'.format(a, b, sub(a, b)))
    print('{} * {} = {}'.format(a, b, mul(a, b)))
    print('{} / {} = {}'.format(a, b, div(a, b)))
