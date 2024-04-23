#shifting letters
alpha = 'abcdefghijklmnopqurstuvwxyz'


n = 'arifin' #bsjgjo

t = ''

i = 0

t = t+(alpha[((alpha.index(n[i])+1)%26)])
t = t+(alpha[((alpha.index(n[i+1])+1)%26)])
t = t+(alpha[((alpha.index(n[i+2])+1)%26)])
t = t+(alpha[((alpha.index(n[i+3])+1)%26)])
t = t+(alpha[((alpha.index(n[i+4])+1)%26)])
t = t+(alpha[((alpha.index(n[i+5])+1)%26)])

print(t)