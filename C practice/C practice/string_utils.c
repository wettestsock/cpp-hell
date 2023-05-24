#include <stdio.h>

#include <stdbool.h>			//booleans!
#include <math.h>			//math!!!
#include <ctype.h>			//a lot of functions for string manipulaiton
#include <string.h>				//string functions
#include <stdlib.h> 
#include <time.h>



//DECLARES AND DEFINES


//functions are after main, more advantages for doign so


//FUNCTION PROTOTYPE  ------
//a function declaration without a body , before main, 
//that ensures that calls to the function are made with correct # of arguments
//if too few arguments, itll call an error: too few arguments for call

//many c compilers dont check for parameter matching, commonly used in header files


void superBirthday(char[]);
//---------



//FUNCTIONS !!! --
//note: you can call functions after the main function

void birthday() {			//return type
	printf("happy birthday dudeeee!!!\n");
};

void superBirthday(char name[]) {
	printf("happy birthday %s \n", name);
};

int multiply(int x, int y) {
	return x * y;
};

void bubbleSort(double array[], int size) {



	//bubblesort algorithm 
	//sorts first element against all and if it's biggest, puts it back
	//can work with chars too


	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) //each iteration the number is compared to the rest of the numbers
		{
			if (array[j] > array[j + 1]) //flip this sign to invert
			{
				double temp = array[j];  //if number on left is bigger than on the right, the var is swapped
				array[j] = array[j + 1];
				array[j + 1] = temp;
			};
		};    //note: cant return an array :((
	};
}


void printArr(double array[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%.1lf\t", array[i]);
	};
	printf("\n");
}

//--------
