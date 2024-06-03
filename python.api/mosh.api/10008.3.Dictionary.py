message = input(">> ")
words = message.split(" ")


emoji = {
    ":)": "😃",
    ":(": "😞",
    "<3": "🩵"
}

output = ""
for i in words:
    output = output + emoji.get(i, i) + " "

print(output)

