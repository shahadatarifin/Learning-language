'''
Problem 1: Find all prime numbers less than the entered number

Input   Output
9       2 3 5 7
15      2 3 5 7 11 13
3       2
2       No output
1       No output 

'''
n = int(input("Enter a number: "))

if(n > 2):
    print(2, end = ' ')
    for i in range(3, n):
        flag = False
        for j in range(2, i):
            if(i % j == 0):
                flag = False
                break
            else:
                flag = True
        if(flag == True):
            print(i, end = ' ')
else:
    print("No output\n")