
import math     #math module for math
import time     #time module for time
import random
import os  #files
import shutil # copying files !





print('goodbye world!!', end='') #, end='' overrides the default \n
ganggggg = 5 


forreal = False
print(ganggggg, 'fdjshfkdjh', (str)(forreal))  #explicit casting



def AbsfileLocation(name, dir):
    
 
    if not os.path.exists(dir):
        os.mkdir(dir)
        open(dir + '\\' + name, 'w')
        

    for root,dirs,files in os.walk(dir):   #iteration through a dir for each file
        #root, dirs, and files produces lists
        if name in files: # in <- if element is in list
            print(str(os.path.abspath(name)))
        else:
            print("no text files found")

    

AbsfileLocation('test2.txt', 'testFolder2')
#------------------

#FILE HANDLING



# makes a new file
#note: file has to be write or x mode to be created new
with open('test.txt', 'w') as newFile:
    newFile.write('hello this is a new file')

 #file paths are with double slahes
# note: can be either relative or absolute file path



#makes a directory
os.mkdir('gangNose')



if os.path.exists('test.txt'):
    print('the path exists')
    if os.path.isfile('test.txt'):
        print('the file exists')
else:
    print('path dont exist')


try:
    with open('test.txt', 'w') as file:  #'r' by default for read-only, w for write-only
        file.write(str(input('put something new the text file: ')))
    
    with open('test.txt', 'a') as file:  #append
        file.write('\n' + str(input('apped something: ')))


    with open('test.txt') as file:  # automatically closes the file after it's been open
        print('the contents of the file are:\n' + file.read() + '\n\n\n')
    print (file.closed)
except FileNotFoundError:
    print('file not found')


#copying files::::

with open('test.txt') as file:
    shutil.copyfile('test.txt', 'poof.txt')
    
    #also copy() which copies the permission mode and destination can be a direcotry
    #copy2() basically copy() + all the metadata 


#--------

#      for i in range(100):
#          with open('test' + str(i) +'.txt', 'w') as text:
#              text.write('hello my fellow youtubers')

# ^^^^ makes 100 new files


#i = 0
#while True:
#    with open('hello' + str(i) + '.txt', 'w') as hiii:
#        hiii.write('everything is awesome')
#    i+=1

# ^ the most nefarious piece of code ever written

#----------------
#MOVING FILES
#can move file and/or directory

try:
    if os.path.exists('testFolder\\test.txt'):
        print('the file already exists')
    else:
        os.replace('test.txt', 'testFolder\\test.txt')      #replace
        print('test.txt was moved')
except FileNotFoundError:
    print('testFolder\\test.txt wasnt found')


#---------
#DELETING FILES

with open('coolTextFile.txt', 'w') as t:
    t.write('hello!!!!')

try:
    for i in 'coolTextFile.txt', 'poof.txt', 'test.txt':
        os.remove(i)
    os.rmdir('gangNose')
    
except FileNotFoundError:
    print('files not found')
except PermissionError:
    print('dont have permission to delete that')
else:
    print('files and dir were removed')


#-------------------
#RANDOM


x = random.randint(1,5)  # range
y = random.random() # random between 0 and 1
myList = [3423,42,3,2,4545,3]
z = random.choice(myList)

random.shuffle(myList)


#---------------------

#EXCEPTION HANDLING

try:
    number = int(input('type a cool number'))
    result = 'the cool number output is: ' + str(pow(number, 3))
except ZeroDivisionError as e:  # e prints the error 
    print(e)
    print('zero divison error')

except ValueError as e: 
    print(e)
    print('enter only numbers!!!!!')

except Exception as e:   #not good to have just alone, like an else statement
    print(e)
    print('oopsie went wrong')

else:   # if theres no exceptions 
    print(result)

finally:  #always execute
    print('this will always execute')



#----------------




#MULTIPLE ASSIGNMENT
#assigning multiple variables at the same time with same line
# pretty cool maybe

name, age, real = 'hdhhgdghf', 4534, True   #multiple assignment vars to diff values

sponge = sponge2 = sponge3 = sponge4 = 33       #assign multiple variables to same value


#-----------------




#----------------------------

#string methods !

hhhhh = len(name) #length of a string

hhhhh = name.find('g') #index of the char 

hhhhh = name.capitalize() 
hhhhh = name.upper()
hhhhh = name.lower() 
hhhhh = name.isalpha() 

print(name*3) # can print the string multiple times !!

#some other ones ...........




#slicing string ----

name = 'james charles'


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
#STRING FORMAT 
#c-like string formatting


ind, con = 'industrial revolution', 'consequences'


print('the {} and its {:15} have been a disaster for the {:b}'.format(ind, con, 34534)) # :15 is the padding # :<15 left allign :>15 right allign :^15 center allign
                                                          #:b is binary representation

print('the {1} and its {0} have been a disaster for the {2}'.format(ind, con, 'human race')) #indexing of the values


print('the {gang} and its {gang2} {gang2} have been a disaster for the {hello}'.format(gang = 'fsfd', gang2 = '2222', hello = 'hello')) #positional argument

 
print('the number of pi is {:.2f}'.format(3.14432))  #works like inserting in c 

text = 'hello {} this is a {}'

print(text.format('visitor', 'test'))

#------------


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
    print('hiiii!!!!!\n')
elif age == 4534 or False:  # not else if, just elif
    print('jfdkjgflkjgdflgjf')
elif not True :
    print('fjksdkfj!!!!!!!!')
else:
    print('WHO TOLD YOU THIS')




#---------------------------

#USER INPUT !!!

name = input('whats your name ? ')  # note : input only accepts a string 
# if want another data type, cast it

insideee = input('age/???')

counting = int(insideee) if (insideee.isdecimal()) else 0           #ternary statement

print(' you are ' + str(counting) + ' years old !!')



#---------------------


#LOOPS  AND IDK 

name = None     # none is null 

while not name: #null returns false
    name = input('type your name ')

for i in range(10):     #for loop !!
    print(i)

for i in range(5,10+1): #inclusive, exclusive , in a range
    print(i) 

for i in 'gang weed':  #iterates through the string
    print(i)


#for s in range(10,0,-1):    #seconds !!
#    print(s)
#    time.sleep(1)  #sleep waits for a second !!
    
# break and continue does what it always does
# pass is placeholder , does nothign

#--------------------------------------------

#lists (arrays)))

coolList = ['cheese', 'gang', 'we', 'nose']

for i in coolList: #works in a for loop
    print(i)

coolList.append('iceeeee')  #LOTS OF FUNCTIONS FOR THE LIST

#------------------------------------------------------------

#TUPLES  !!!!! 
#collection which is ordered and read-only

student = (3,3,4,56,3,2,4,5,3,2)

#------------------

#SET 
# collection which is unordered and unindexed , no duplicates
#if print, itll be random
#faster than a list

utencial = {'fork', 'spoon', 'gang'}

#---------------

#DICTIONARY 
#changeable, unordered collection of unique key / value pairs
#allow to access data quick

capitals = {'USE':3, 'gang':4543, '432':543}

# print(capitals['gang']) <- unsafe
capitals.update({'cheese':32432434})
capitals.update({'gang':9999})

print(capitals.get('gang'))
#print(capitals.get('gang'), capitals.keys(), capitals.values())  

for key, value in capitals.items():     #this works
    print(key, value)


#-------------------
#FUNCTIONS

def hello():
    print('fdjklgjdlkjsdokol;jdilgjrildij', end='')

def otherHello(cool, swag):
    print(cool + swag, end='')

hello()
otherHello('cool and ', 'swag ')
otherHello(swag = ' swag comes before ', cool = 'cool')  #keyword arguments

#args --
 
def add(*args):  #packs all arguments into a tuple
    sum = 0
    stuff = list(args)  #casts the tuple into a list and stores in stuff

    stuff[0] = 3423424432 

    for i in stuff:
        sum +=i
    return sum

#note : **kwargs is same as *args but makes into a dictionary


print(add(3,4,3,2,2,3,3,4))


#----------


#WHATEVER PRACTICING !!!

