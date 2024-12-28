# sort a list using function
def min(l):
    mini = l[0]
    for i in l[:]:
        if(i < mini):
            mini = i
    return mini

def oveous_sort(l):
    x = []
    while(len(l) > 0):
        mini = min(l)
        x.append(mini)
        l.remove(mini)
    return x

list = [6, 2, 7, -2, 9, -6]
print(oveous_sort(list))