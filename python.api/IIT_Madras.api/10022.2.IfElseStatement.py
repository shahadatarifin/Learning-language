'''
Problem 2: Find whether the given number
ends with 0 or 5 or any other number

Input   output
20      0
14      Other
5       5
0       0
-27     other
-10     0

'''

a = int(input("Enter a number: "))

if(a%5 == 0):
    if(a%10 == 0):
        print('0')
    else:
        print('5')
else:
    print('Other')