#!/usr/bin/python3
str = "Python is an interpreted, interactive, object-oriented programming\
 language that combines remarkable power with very clear syntaxob"
str = str[39:67] + str[106:111].strip() + " " + str[0:6]
print(str)
