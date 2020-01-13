myNumericString = "12345"
myNonNumericString = "ABCDE"

#isdigit() checks if all the char in a str are digits

#Checks if myNumericString is purely numeric
if myNumericString.isdigit():
    print("The first string is numerical.")
else:
    print("The first string is non-numerical.")
#Checks if myNonNumericString is purely numeric
if myNonNumericString.isdigit():
    print("The second string is numerical.")
else:
    print("The second string is non-numerical.")