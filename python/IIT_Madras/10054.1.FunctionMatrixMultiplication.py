# Matrix multiplication by using functions

# initialise to zero
# consider tow matrix
# find the dot product of two lists
# pick in i th row and j th column in a matrix

def initialise_mat(dimention):
    x = []
    for i in range(dimention):
        x.append([])
        for j in range(dimention):
            x[i].append(0)
    return x

def dot(a, b):
    dimention = len(a)
    ans = 0
    for i in range(dimention):
        ans = ans + (a[i]*b[i])
    return ans





