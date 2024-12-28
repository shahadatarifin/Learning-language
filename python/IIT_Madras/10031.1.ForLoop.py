# An example of for loop

for i in range(10):
    print(i, "Hello World")


#
a = int(input("Enter a number: "))

for i in range(a):
    if(i%2 == 0):
        print(i, "is a even number")
    else:
        print(i, "is a odd number")