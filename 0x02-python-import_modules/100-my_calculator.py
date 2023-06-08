#!/usr/bin/python3
from sys import exit, argv
import add, sub, div, mul

if (__name__ == "__main__"):
    sum = len(argv)

    if (sum != 4):
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        exit(1)

    else:
        operator = argv[2]
        a = int(argv[1])
        b = int(argv[3])

        if (operator == "add"):
            print("{} + {} = {}".format(a, b, add(a, b)))

        elif (operator == "sub"):
            print("{} - {} = {}".format(a, b, sub(a, b)))

        elif (operator == "mul"):
            print("{} * {} = {}".format(a, b, mul(a, b)))

        elif (operator == "div"):
            print("{} / {} = {}".format(a, b, div(a, b)))

        else:
            print("Unknown operator. Available operators: +, -, * and /")
            exit(1)
