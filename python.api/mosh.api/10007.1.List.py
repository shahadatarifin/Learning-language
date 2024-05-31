# WAP to remove the duplicates
l = [1, 4, 4, 9, 69, 69, 3, 5, 1]

for i in l:
    if l.count(i) > 1:
        l.remove(i)

print(l)



# Another solution 
m = []

for i in l:
    if i not in m:
        m.append(i)
print(m)