'''
Problem 2: Find the number of digits in the given number

input       output
1234        4
1234567890  10
8           1
0           1
-4          1

'''

n = abs(int(input("Enter a number: ")))
digits = 1

while(n > 9):
    n = n // 10
    digits = digits + 1

print(digits)