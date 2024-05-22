# Break
email = input("Email: ")

for i in email:
    if(i == '@'):
        break
    print(i, end = '')

# Continue
print("\n\n")
email = input("Email: ")

for i in email:
    if(i == '@'):
        print('')
        continue
    print(i, end = '')


# pass
print("\n\n")

for i in range(11):
    if( i % 2 == 0):
        print(i)
    else:               # i don't think yeat what i will do with odd number 
        pass            # for this, i use 'pass' keyword