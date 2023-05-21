#include <stdio.h>

#include <stdbool.h> //booleans!


int main() { //note: main can also be an integer

	int x = 3; //integer lol, 4 bytes 

	//NOTE: ONLY INTEGERS CAN BE SIGNED / UNSIGNED
	signed int y = 3;  // <---- all variables are already signed by default
	short int z = 453; // <---- 2 bytes, stores half the regular int

	const float pi = 3.14159; //const, same as c++

	short v = 432; //same as a short int, just dont need the int part

	long long int bigboy = 439589835875893; //-9 to 9 quintillion , 8 bytes , %lld to output it
	//long long because int is long by default, long long just expands it
	unsigned long long int biggerboy = 1355354435434378657U; //0 to 18 quintillion , 8 bytes
	//note: if integer is too big and gives a warning, put a U at the end to signify that it's unsigned

	//note : if number is beyond the maximum value, itll reset and return to the maximum negative value 

	float gpa = 0.24; //float, 7 digits, 4 bytes
	double h = 3.568; //whoa, 8 bytes 
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
	//unsigned = positive only 
	//%u for unsigned int
	//%d for signed int


	//note : have to make a format specifier 
	printf("i like mac and cheessee %d hahaha \n", x); //have to specify the data type, here beind %d, and c puts it in there
	printf("really cool and awesome unsigned integer: %u", booo); //note: have to use %u when outputting an unsigned number

	printf("i like mac and cheessee %c sfhshfahfdkhj \n this is a long long integer: %lld \n this is an unsigned long long int: %llu \n", pissNumber, bigboy, biggerboy); //pissNumber, int to char conversion via ascii
	
	// this ex it's converting to b

	// %f is for float, %f is for float, %lf is for long float

	printf("there was this guy and he was %s \n", name); //%s is for a string

	printf("wassup hoe");
	printf("\n");
	printf("\"we wuz kangz and shieeet\" -tyrone \n"); //\" allows to put double quotes in output

	//FLOAT PRECISION!!!! -------------------
	// .1 , .2 , etc will specify till which decimal, and will round the number


	printf("float precision !!! : %.2lf", h);
	printf("\n");	
	


	//FIELD WIDTh ----------
	//1 , 2 , etc		specifies the character width allocated for the output variable

	printf("field width !!! : %20lf", h); 
	printf("\n"); 
	
	printf("field width but from the left !!! : %-20lf lmaoooo", h); 
	printf("\n");

	/*  other format specifiers
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
     