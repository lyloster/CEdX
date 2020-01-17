#Write a function called sortString. sortString should take
#one parameter as input, a string. If the input is not a
#string, sortString should return the string "Not a string!"
#If the input is a string, sortString should return a four-
#line string according to the following directions:
#
# - On the first line should be each capital letter in the
#   string, in the order in which they appear.
# - On the second line should be each lower-case letter in
#   the string, in the order in which they appear.
# - On the third line should be each punctuation mark or
#   numeral in the string, in the order in which they
#   appear.
# - On the fourth line should be an integer representing
#   how many spaces were found in the string.
#
#There should be no other text in the string that you output
#besides these four lines and the line breaks between them.
#To insert a line break into a string, insert the character
#sequence "\n". For example, line1 + "\n" + line2 would give
#a string with the first two lines and a line break in
#between. You may assume that the string will only be
#letters, spaces, and punctuation -- no numbers, line breaks,
#tabs, etc.
#
#For example, calling sortString("Hello, world!!1" should
#return: "H\nelloworld\n,!!1\n1", which would look like this
#when printed:
#H
#elloworld
#,!!1
#1
#
#Hint: Use the ord() function! Remember, when you pass a
#one-character string into ord(), it returns a number.
#
# - Lower-case letters will return a number from 97 to 122.
# - Upper-case letters will return a number from 65 to 90.
# - Puncutation marks and numbers will return a number from
#   33 to 64.
# - Spaces will return the number 32.
#
#So, you can check if a letter is lowercase by seeing if
#ord(letter) is between 97 and 122 (inclusive; 97 is 'a',
#122 is 'z'), and so on for uppercase and punctuation.
#
#Hint 2: Build up three separate strings (one for
#uppercase, one for lowercase, and one for punctuation),
#then combine them and the count of the number of spaces
#into a string to return at the end.


#Write your sortString function here!
def sortString (stringInput):
    if type(stringInput) is not str:
        return "Not a string!"
    else:
        line1 = findUpper(stringInput)
        line2 = findLower(stringInput)
        line3 = findPunctuation(stringInput)
        line4 = countSpaces(stringInput)
        return line1 + "\n" + line2 + "\n" + line3 + "\n" + str(line4)

def findUpper(stringInput):
    upperString = ""
    for letter in stringInput:
        if ord(letter) >=65 and ord(letter) <=90:
            upperString += letter
    return upperString

def findLower(stringInput):
    lowerString = ""
    for letter in stringInput:
        if ord(letter) >=97 and ord(letter) <=122:
            lowerString += letter
    return lowerString

def findPunctuation(stringInput):
    punctString = ""
    for letter in stringInput:
        if ord(letter) >=33 and ord(letter) <=64:
            punctString += letter
    return punctString

def countSpaces(stringInput):
    numSpaces = 0
    for letter in stringInput:
        if ord(letter) == 32:
            numSpaces += 1
    return numSpaces

#The line of code below will test your function. It is not
#used for grading, so feel free to modify it. As written,
#it should print:
#ZOMGHCS
#ello
#,1301!!
#2
print(sortString("ZOMG Hello, CS1301!!"))


