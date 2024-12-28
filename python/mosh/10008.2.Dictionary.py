# number to word
number = int(input("->> "))

digit_mapping = {"1": "one", "2": "two", "3": "three", "4":"four", "5": "five", 
                 "6": "six", "7": "seven", "8": "eight", "9": "nine", "0": "zero"}

number_str = str(number)
for i in number_str:
    print(digit_mapping[i])


#or
number = input(">>")
DigitMapping = {
    "1": "one",
    "2": "two",
    "3": "three",
    "4": "four",
    "5": "five",
    "6": "six",
    "7": "seven",
    "8": "eight",
    "9": "nine",
    "0": "zero"
}

output = ''

for i in number:
    output = output + DigitMapping.get(i, "!") + " "

print(output)