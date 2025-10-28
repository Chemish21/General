#!/usr/bin/env python3
import random

name_list = []
count = 0

print("Let fate decide the chosen one!")
print("How many people to choose from?")
print("-------------------------------")
total_names = int(input("Enter: "))

print()

while count < total_names:
  name = input("Name: ")
  name_list.append(name)
  count += 1

print()

rand_name = random.choice(name_list)
print("The voices have spoken!")
print("-----------------------")
print(f"It is {rand_name}!")