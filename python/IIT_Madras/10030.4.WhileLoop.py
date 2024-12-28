'''
Problem 4: Find whether the entered number is palindrome or not

Input       Output
12321       Palindrome
1221        Palindrome
1234        Not Palindrome
123421      Not Palindrome
9           Palindrome
-1221       Palindrome

'''

n = int(input("Enter a number: "))
num = abs(n)

rev = num % 10
num = num // 10
while(num > 0):
    r = num % 10
    num = num // 10
    rev = rev*10 + r

if(n < 0):
    rev = rev * (-1)

if(n == rev):
    print("Palindrome")
else:
    print("Not palindrome")