l = [12, 24, 132, 444, 500]
a = 122
flag = 0

for i in range(len(l)-1):
    if (a == l[i]):
        print("Element found")
        flag = 1
        break

if(flag == 0):
    print("not found")