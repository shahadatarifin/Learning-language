'''
problem 1: Find the factorial of the given nubmer

Input   Output
5       120
2       2
0       1
-7      Not defined

'''
n = int(input("Enter a number: "))
ans = 1
if(n >= 0):
    for i in range(n, 1, -1):
        ans = ans * i
    print(ans)
else:
    print("Not defined")