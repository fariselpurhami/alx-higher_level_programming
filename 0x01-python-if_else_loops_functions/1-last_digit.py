#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)

number = int(input('what is you number: '))
last_digit = number

if last_digit > 5:
  print('last digit', number, 'and is grater than 5')

elif last_digit == 0:
  print('last digit', number, 'and is 0')

else:
  print('last digit', number, 'and less than 6 and not 0')

print()
