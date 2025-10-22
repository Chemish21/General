#!/usr/bin/env python3
import random

#Setting random number
rand_number = random.randint(1,100)

#Difficulty chances
difficulty = {"Easy": 10,
              "Medium": 5,
              "Hard": 3}

def play_game(the_difficulty, total_chances):
  #User guess
  guess = 0

  #Number of attempts from user starting from 1st attempt
  att_count = 1

  diff = the_difficulty
  chances = total_chances

  print(f"Great! You have selected the {diff} difficulty level.")
  print("Lets Start the game!")
  print()
  while att_count <= chances:
    guess = int(input("Enter Your Guess: "))
    if guess < rand_number:
      print(f"Incorrect! The number is greater than {guess}!")
      print()
    elif guess > rand_number:
      print(f"Incorrect! The number is less than {guess}!")
      print()
    else:
      print(f"Congratulations! You guessed it right in {att_count} attempts!")
      break
    att_count += 1

  if guess != rand_number:
    print("You'll get it next time!")
    print(f"The Answer was {rand_number}")

def welcome():
  print("---------------------------------------------------------")
  print("Welcome to the Number Guessing Game!")
  print("Try guessing a number between 1 and 100.") 
  print("You have a couple of chances to guess the correct number.")
  print("---------------------------------------------------------")

def select_difficulty():
  print("Please select a difficulty level:")
  print("1. Easy (10 chances)")
  print("2. Medium (5 chances)")
  print("3. Hard (3 chances)")
  print()

#Start of game
welcome()
select_difficulty()

choice = int(input("Enter your choice: "))

while choice < 1 or choice > 3:
  print("Choice must be 1-3")
  choice = int(input("Enter choice: "))

print()

if choice == 1:
  play_game("Easy", difficulty.get("Easy"))
elif choice == 2:
  play_game("Medium", difficulty.get("Medium"))
else:
  play_game("Hard", difficulty.get("Hard"))
