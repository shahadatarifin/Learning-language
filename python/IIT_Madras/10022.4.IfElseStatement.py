'''
Problem 3: Find the grade of student based
on the given marks from 0 to 100.

Student grades  Marks range
A               ≥90
B               ≥80 and <90
C               ≥70 and <80
D               ≥60 and <70
E                       <60

Input   Output
95      A
87      B
70      C
61      D       
0       E
100     A
-5      Invalid input
110     Invalid input

'''

a = int(input("Enter your marks: "))

if(a <= 100 or a >= 0):
    if(a >= 90):
        print('A')
    elif(a >= 80):
        print('B')
    elif(a >= 70):
        print('C')
    elif(a >= 60):
        print('D')
    else:
        print('E')
else:
    print('Invalid input')