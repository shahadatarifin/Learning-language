'''
Problem 2: Find the number of digits in the given number

input       output
1234        4
1234567890  10
8           1
0           1
-4          1

'''

n = int(input("Enter a number: "))
num = abs(n)
strNum = str(num)
count = 0

for i in strNum:
    count = count + 1
print(count)
