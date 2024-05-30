dimention = 3

r1 = [1, 2, 3]
r2 = [4, 5, 6]
r3 = [7, 8, 9]

s1 = [1, 2, 1]
s2 = [6, 2, 3]
s3 = [4, 2, 1]

a = []
a.append(r1)
a.append(r2)
a.append(r3)

b = []
b.append(s1)
b.append(s2)
b.append(s3)

c = [[0,0,0], [0,0,0], [0,0,0]]

for i in range(dimention):
    for j in range(dimention):
        for k in range(dimention):
            c[i][j] = c[i][j] + a[i][k]*b[k][j]
    
    print(c[i])


# easiest way
print("\n\n\n\n")
import numpy

x = numpy.mat(a)
y = numpy.mat(b)
print(x*y)