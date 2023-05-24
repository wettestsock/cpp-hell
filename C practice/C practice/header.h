#pragma once

#include <string.h>				//string functions

//in a header file, only declarations exist
//not implementations


//DECLARES EVERYTHING //DOESNT DEFINE!!! //ONLY FUNCTION PROTOTYPES

//functions, classes, and anything else thatll be used throughout the project is declared here


//FUNCTION PROTOTYPE  ------
//a function declaration without a body , before main, 
//that ensures that calls to the function are made with correct # of arguments
//if too few arguments, itll call an error: too few arguments for call

//many c compilers dont check for parameter matching, commonly used in header files



void birthday();

void superBirthday(char name[]);
int multiply(int x, int y);
void bubbleSort(double array[], int size);
void printArr(double array[], int size);
