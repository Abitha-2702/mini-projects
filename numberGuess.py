import math
import random

#Taking inputs
start = int(input("Enter starting number : "))
end = int(input("Enter ending number : "))

#Generating random number
n = random.randint(start,end)

#Calculating chances
chance = int(math.log(end-start+1)/math.log(2))

print('Total number of guesses : ', chance , '\n')

#Guessing number
count = 0
flag = 0
while(count < chance):
    count += 1
    guess=int(input('Guess the number : '))
    if(guess == n):
        print('You guessed the number correct on ' , count , '\n')
        flag = 1
        break
    elif(guess < n):
        print('You guess too small') 
    else:
        print('You guessed too high')
if(flag != 1):
    print('The number is ' , n , '\nBetter luck next time\n')
