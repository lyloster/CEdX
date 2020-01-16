myString = "This string is not a number!"
#Run the code below until an error occurs
try:    
    print("Converting myString to int...")
    print("String #" + 1 + ": " + myString)
    myInt = int(myString)
    print(myInt)
    print(1 / 0)
#If an error occurs, check if it's a ValueError or #TypeError
#as error -> automatic error message is stored in the variable error and then printed
except (ValueError, TypeError) as error: 
    print("A ValueError or TypeError occurred.")
#Check if some other type of error occurred
#Exception -> catch-all
except Exception as error:  
    print("Some other type of error occurred.")
print("Done!")
