import random
s = random.randint(1, 9)
flag = 0
i = 0

while(i < 3):
    n = int(input("Guess: "))
    if(n == s):
        print("\nYou Won!")
        flag = 1
        break
    i += 1
if(flag == 0):
    print("\nBetter luck next time! ")
    print(f'It was {s} \n')