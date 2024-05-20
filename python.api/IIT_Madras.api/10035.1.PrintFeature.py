#in default print statement goes to new line
for i in range(10):
    print(i, end = " ") 



# defoult value of ',' separator is space
print("\n\n")
day = 21
month = 7
year = 2005
print("Today's date is ", day, month, year, sep = '/') 

print("Todya's date is", end = ' ')
print(day, month, year, sep = '-')



# f print
# f' represents formated print statement. Hence whatever the value which is 
# mentioned inside parenthesis as inside those ccurly brackets will be considered as variable,
# rest everything will be consider as string
print("\n\n")
n = 4
for i in range(1, 11):
    print(f'{n} X {i} = {n*i}')


# string modulo
print("\n\n")
n = 5
for i in range(1, 11):
    print('%d X %d = %d' %(n, i, n*i))


# format function
print("\n\n")
n = 6
for i in range(1, 11):
    print('{0} X {1} = {2}'.format(n, i, n*i))


#f print, string modulo & format function
print("\n\n")
pi = 22/7
print(f'Value of pi = {pi}')
print('Value of pi = {0}'.format(pi))
print('Value of pi = %f'%(pi))


print(f'Value of pi = {pi:.2f}')
print('Value of pi = {0:.2f}'.format(pi))
print('Value of pi = %.2f'%(pi))



#
print("\n\n")

print('{0}'. format (1))
print('{0}'. format (11))
print('{0}'. format (111))
print('{0}'. format (1111))
print('{0}'. format (11111))

print('{0:5d}'. format (1))
print('{0:5d}'. format (11))
print('{0:5d}'. format (111))
print('{0:5d}'. format (1111))
print('{0:5d}'. format (11111))