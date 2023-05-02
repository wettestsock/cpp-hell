#include <stdio.h>

#include <stdbool.h> //booleans!


void main() {

	int x = 3; //integer lol, 4 bytes 
	signed int y = 3;  // <---- all variables are already signed by default
	short int z = 453; // <---- 2 bytes, stores half the regular int

	short v = 432; //same as a short int, just dont need the int part

	//note : if number is beyond the maximum value, itll reset and return to the maximum negative value 

	float gpa = 0.24; //float, 7 digits, 4 bytes
	double h = 3.5643543454354; //whoa, 8 bytes 
	char piss = 'a'; //char
	char pissNumber = 100; 
	//can store a variable in a char between -128 adn 127, %d or %c, 1 byte of memory
	unsigned char positivity = 100; // 0 to 255, because cant be negative, if beyond 255 itll reset to 0


	//note: if %c is used to output, itll be automatically converted in accordance with the ascii table



	bool ucfisHUGEEE = true; //true or false, outputs as %d (number) 
	//c isnt object oriented so PISS !!!!
	//no strings!
	//but can make a char array
	char name[] = "pissman certified"; //string 


	unsigned int booo = 23; //unsigned means the number cant be negative 



	//note : have to make a format specifier 
	printf("i like mac and cheessee %d hahaha \n", x); //have to specify the data type, here beind %d, and c puts it in there
	//note: no %i only %d for integers

	printf("really cool and awesome unsigned integer: %u", booo); //note: have to use %u when outputting an unsigned number

	printf("i like mac and cheessee %c sfhshfahfdkhj \n", pissNumber); //pissNumber, int to char conversion via ascii
	// this ex it's converting to b

	// %f is for float, %f is for float, %lf is for long float

	printf("there was this guy and he was %s \n", name);

	printf("wassup hoe");
	printf("\n");
	printf("\"we wuz kangz and shieeet\" -tyrone"); //\" allows to put double quotes in output
	printf("\n");

	/*  other ones
	* \a <--- alert
	* \b <--- backspace
	* \t <--- horizontal tab
	* \v <--- vertical tab
	* \\ <--- backslash
	* \? <--- question mark
	* \b <--- backspace
	*/
	printf("\n");
	system("pause"); //basically std cin get

}
     