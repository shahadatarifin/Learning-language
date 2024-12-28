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
strNum = str(num)

rev = ''
for i in strNum:
    rev = i + rev

if(n < 0):
    rev = '-' + rev

r = int(rev)

if(r == n):
    print("Palindrome")
else:
    print("Not Palindromme")


