# Easiest way
l = [12, 1, 5, 53, 21, 13, 8]
l.sort()
print(l)


# Another way(just for practice)
l = [12, 1, 5, 53, 21, 13, 8]
a = []

while(len(l) != 0):
    min = l[0]
    for i in range(len(l)):
        if(l[i] < min):
            min = l[i]
    a.append(min)
    l.remove(min)
    
print(l)
print(a)