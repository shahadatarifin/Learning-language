# WAT to add first 'n' numbers of integers using for loop

n = int(input("Enter a number: "))
sum = 0
for i in range(n+1):
    sum = sum + i
print(sum)