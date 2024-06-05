a = 0
while a <= 10:
    n = input("Enter number of week : ")

    if n == "1":
        DAY = "Monday"
    elif n == "2":
        DAY = "Tuesday"
    elif n == "3":
        DAY = "Wednesday"
    elif n == "4":
        DAY = "Thursday"
    elif n == "5":
        DAY = "Friday"
    elif n == "6":
        DAY = "Saturday"
    elif n == "7":
        DAY = "Sunday"
    else:
        print("Invalid input. Exiting the loop.")
        break
    print("The number " + n + " is " + DAY)
