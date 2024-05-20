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
strNum = str(num)

rev = ''
for i in strNum:
    rev = i + rev

if(n >= 0):
    print(rev)
else:
    print('-' + rev)