# by using function finding minimum element of the list, maximum element of the list etc

def list_min(l):
    mini = l[0]
    for i in l[:]:
        if (i < l[0]):
            mini = i
    return mini

def list_max(l):
    maxi = l[0]
    for i in range(len(l)):
        if (l[i] > maxi):
            maxi = l[i]
    return maxi

def list_appendBefore(l, z):
    x = []
    for i in z[:]:
        x.append(i)
    for i in l[:]:
        x.append(i)
    return x

def list_appendEnd(l, z):
    x = []
    for i in l[:]:
        x.append(i)
    for i in z[:]:
        x.append(i)
    return x
    
def list_average(l):
    sum = 0
    for i in l[:]:
        sum = sum + i
    avg = sum / len(l)
    return avg



list = [1, 9, 2, 5, 8, -1, 7]
print("Maximum", list_max(list))
print("Minimum", list_min)
print("Append before", list_appendBefore(list, [9, 99, 999]))
print("Append end", list_appendEnd(list, [9, 99, 999]))
print("Average %.2f"%(list_average(list)))