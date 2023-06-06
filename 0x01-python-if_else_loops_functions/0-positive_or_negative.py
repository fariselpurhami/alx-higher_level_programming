#!/usr/bin/python3
import random
number = random.randint(-10, 10)
if number > 0:
  print('positive', number)

elif number == 0:
  print('zero', number)

else:
  print('negative', number)
