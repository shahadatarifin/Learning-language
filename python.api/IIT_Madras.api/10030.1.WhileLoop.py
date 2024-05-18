'''
problem 1: Find the factorial of the given nubmer

Input   Output
5       120
2       2
0       1
-7      Not defined

'''
import sys

n = int(input("Enter a number: "))
ans = 1
i = 1

if(n < 0):
    print("Not defined")
    sys.exit()

while(i <= n):

    ans = ans * i
    i = i+1

print(ans)



                        # or




n = int(input("Enter a number: "))
ans = 1
i = 1

if n < 0:
    print("Not defined")
else:
    while i <= n:
        ans = ans * i
        i = i + 1

    print(ans)
