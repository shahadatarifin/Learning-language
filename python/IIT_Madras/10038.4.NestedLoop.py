'''
Problem 4: Find the length of longest word find the set of words entered by the user

Input                                           Output

IITM online degree -1                           6
Bachelor of science -1                          8
Computational thinking -1                       13
Introduction to python -1                       12
Programming data structures and algorithms      11

'''
#I don't get this code 
word = input("Enter a word: ")
maxLen = 0

while(word != '-1'):
    count = 0
    
    for letter in word:
        count = count + 1

        if(count > maxLen):
            maxLen = count
        
    word = input("Enter a word: ")

print(f'The length of largest word is {maxLen}')