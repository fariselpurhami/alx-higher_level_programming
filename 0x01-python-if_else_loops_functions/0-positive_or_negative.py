#!/usr/bin/python3
import random
number = random.randint(-10, 10)
if number > 0:
  print('is positive', str(number))

elif number == 0:
  print('is zero', str(number))

else:
  print('is negative', str(number))
