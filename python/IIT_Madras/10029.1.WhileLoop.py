# factorial 

n = int(input("Enter a number: "))
i = 1
ans = 1

while(i <= n):
    ans = ans * i
    i = i+1
    
print("Factorial of", n, "is", ans, '\n')