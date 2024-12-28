print("***** Car game *****")
print("\nstart - To start the car\nstop - to stop the car\nhelp - to see the manu\nquit - to exit\n\n")
started = False
while True:
    choice = input("Enter your choice: ")

    if (choice == "start"):
        if started:
            print("The car is already started\n")
        else:
            print("starting car.....brum brum\n")
            started = True

    elif (choice == "stop"):
        if not started:
            print("Car is already stop\n")
        else:
            print("Car stopped\n")
            started = False
    
    elif (choice == "help"):
        print("start - To start the car\nstop - to stop the car\nhelp - to see the manu\nquit - to exit\n\n")

    elif (choice == "quit"):
        break

    else:
        print("I don't understand your command\n")

print("Thanks for playing my car game\nHave a great day\n")