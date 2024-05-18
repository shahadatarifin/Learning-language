'''
problem 3: Reversse the digit in the given number

input           output
1234            4321
123456789       987654321
0               0
8               8
-1234           -4321

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

print(rev)