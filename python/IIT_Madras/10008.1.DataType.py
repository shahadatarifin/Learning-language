# datatype conversion

a = str(10)
b = float(10)

print(a, type(a))
print(b, type(b))

c1 = bool(100)
c2 = bool(0)
c3 = bool(-100)

print(c1, type(c1))
print(c2, type(c2))             # in boolian conversion every number except 0 are consider as True 
print(c3, type(c3))

c4 = bool('hello')
c5 = bool('0')                  # here '0' is a string, for this the outcome would be True

print(c4, type(c4))             
print(c5, type(c5))
