l = [1, 2, 5, 9,]
print(l)

l.append(143)       # add a new element
print(l)

l.append(2)

l.append(1000)
print(l)

l.remove(143)       # remove a certain element
print(l)

l.remove(1)
print(l)

l.remove(2)
print(l)

l.insert(2, 69)     # add new element in a specific index
print(l)

l.pop()
print(l)            # remove element from end of the list

print(l.index(69))  # index of an element

l.clear()           # remove all element from the list
print(l)

