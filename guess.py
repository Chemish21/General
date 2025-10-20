#!/usr/bin/env python3
import random

#Setting random number
rand_number = random.randint(1,100)

#Difficulty chances
easy = 10
medium = 5
hard = 3

#Start index for difficulty chances
start = 1

#Number of attempts from user
att = 0

print("---------------------------------------------------------")
print("Welcome to the Number Guessing Game!")
print("Try guessing a number between 1 and 100.")
print("You have a couple of chances to guess the correct number.")
print("---------------------------------------------------------")
print("Please select a difficulty level:")
print("1. Easy (10 chances)")
print("2. Medium (5 chances)")
print("3. Hard (3 chances)")
print()

choice = int(input("Enter your choice: "))

while choice < 1 or choice > 3:
  print("Choice must be 1-3")
  choice = int(input("Enter choice: "))

print()
if choice == 1:
  print("Great! You have selected the Easy difficulty level.")
  print("Lets Start the game!")
  print()
  while start <= easy:
    guess = int(input("Enter Your Guess: "))
    att += 1
    if guess < rand_number:
      print(f"Incorrect! The number is greater than {guess}!")
      print()
    elif guess > rand_number:
      print(f"Incorrect! The number is less than {guess}!")
      print()
    else:
      print(f"Congratulations! You guessed it right in {att} attempts!")
      break
    start += 1
elif choice == 2:
  print("Great! You have selected the Medium difficulty level.")
  print("Lets Start the game!")
  print()
  while start <= medium:
    guess = int(input("Enter Your Guess: "))
    att += 1
    if guess < rand_number:
      print(f"Incorrect! The number is greater than {guess}!")
      print()
    elif guess > rand_number:
      print(f"Incorrect! The number is less than {guess}!")
      print()
    else:
      print(f"Congratulations! You guessed it right in {att} attempts!")
      break
    start += 1
else:
  print("Great! You have selected the Hard difficulty level.")
  print("Lets Start the game!")
  print()
  while start <= hard:
    guess = int(input("Enter Your Guess: "))
    att += 1
    if guess < rand_number:
      print(f"Incorrect! The number is greater than {guess}!")
      print()
    elif guess > rand_number:
      print(f"Incorrect! The number is less than {guess}!")
      print()
    else:
      print(f"Congratulations! You guessed it right in {att} attempts!")
      break
    start += 1
    
if guess != rand_number:
  print("You'll get it next time!")
  print(f"The Answer was {rand_number}")
