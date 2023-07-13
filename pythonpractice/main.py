import math
from re import A  #math module for math



print("goodbye world!!")
gang_weed = 5 


forreal = False
print(gang_weed, "fdjshfkdjh", (str)(forreal))  #explicit casting






#---------------------
#MULTIPLE ASSIGNMENT
#assigning multiple variables at the same time with same line
# pretty cool maybe

name, age, real = "hdhhgdghf", 4534, True   #multiple assignment vars to diff values

sponge = sponge2 = sponge3 = sponge4 = 33       #assign multiple variables to same value


#-----------------




#----------------------------

#string methods !

hhhhh = len(name) #length of a string

hhhhh = name.find("g") #index of the char 

hhhhh = name.capitalize() 
hhhhh = name.upper()
hhhhh = name.lower() 
hhhhh = name.isalpha() 

print(name*3) # can print the string multiple times !!

#some other ones ...........




#slicing string ----

name = "james charles"


#              [start:stop:step]  
first_name = name[0]
first_name = name[:5] #from char 0 until NOT 5
               #can be [0:5] but python automatically assumes it's 0
last_name = name[6:] #6 until... 
last_name = name[-7:]  #each string has negative indexing too!!!!!

funny = name[0:5:2]     #step is iterator, 1 by default
funny = name[::2]       #automatically does for the whole string
reverse = name[::-1]    #reverses the string


slice = slice(0, 5, 2) # stores the start stop step indexing

funny = name[slice] #slice returns the start stop step indexing 


print(first_name)
print(last_name)
print(funny)
print(reverse)


#-------------------


# math input

print(round(4.63))
# ceil, floor, abs, pow, sqrt, 
# 
# max, min  have infinite parameters of any values or variablesl




#--------------


#if statements

#and, or, not
# &&  ||   !



if True and True:       #cool and awesome if statment                       #separated by a colon
    print("hiiii!!!!!\n")
elif age == 4534 or False:  # not else if, just elif
    print("jfdkjgflkjgdflgjf")
elif not True :
    print("fjksdkfj!!!!!!!!")
else:
    print("WHO TOLD YOU THIS")




#---------------------------

#USER INPUT !!!

name = input("whats your name ? ")  # note : input only accepts a string 
# if want another data type, cast it

insideee = input("age/???")

counting = int(insideee) if (insideee.isdecimal()) else 0           #ternary statement

print(" you are " + str(counting) + " years old !!")



#---------------------


#LOOPS  AND IDK 

name = None     # none is null 

while not name: #null returns false
    name = input("type your name ")

for i in range(10):     #for loop !!
    print(i)

for i in range(5,10+1): #inclusive, exclusive , in a range
    print(i) 

for i in "gang weed":  #iterates through the string
    print(i)
