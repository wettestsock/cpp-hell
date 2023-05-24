#include <stdio.h>

#include <stdbool.h>			//booleans!
#include <math.h>			//math!!!
#include <ctype.h>			//a lot of functions for string manipulaiton
#include <string.h>				//string functions
#include <stdlib.h> 
#include <time.h>
#include "header.h" //header file


// STRUCTTTTSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS -------------------
//c++ classes without methods (functions) 


struct Player {
	char username[12];
	int score;
};




//---------------------------------------------------

//TYPEDEF -----------

typedef char oguser[25]; //if i need a char array of 25 bytes , call it by datatype user


typedef struct {
	char superName[25];
	char password[12];
	int id;
} User; //typedef struct name
//essentially declared same way a class is in c++

//ARRAY OF STRUCTS ---------------

struct Student {
	char name[12];
	float gpa;
};

//-------

//ENUMS ---------------
//a user defined type of named integer identifiers ,  a constant
//helps to make program more readable
//can be called in BOTH MAIN AND OUTSIDE

//enum Day {Sun, Mon, Tue, Wed, Thu, Fri, Sat}; //index is automatically 0 to n
enum Day {Sun=1, Mon=2, Tue=3, Wed=4, Thu=5, Fri=6, Sat=7}; //can manually assign values






int main() {			//note: main can also be an integer


	//enums!!!  ---------

	enum Day today = Tue; //treats Sun as an integer

	printf("%d\n", today);


	//--------


	//BITWISE OPERATORS !!!! ---------------
	//binary manipulation, very fast

	/*
	&		<--------- and
	|		<--------- or
	^		<--------- exclusive or
	<<		<--------- left shift
	>>		<--------- right shift
	*/

	int a = 6;  //  6 = 00000110
	int b = 12; // 12 = 00001100
	int c = 0;  // 0 =  00000000

	c = a & b;  //   =  00000100 or 4
	//      ^^ if both binary places of a and b are the same, it puts it as a 1 


	c = a | b;  //   =  00001110  === 14
	//		^^ only 1 OR BOTH of the bits has to be 1 for it to be assigned
	// 
	c = a ^ b;  //   =  00001010  === 10
	//		^^ only 1, not both of the bits has to be 1 for it to be assigned



	c = a << 1; //   =  00001100  === 12
	//		^^ shifts the bits 1 space to the left //DOUBLES THE #


	c = a >> 1; //   =  00000011  === 3
	//		^^ shifts the bits 1 space to the left //HALVES THE #

	c = ~a;		//   =	00000001  === -7
	//		^^ inverts the binary (negative because the first binary determines if it's positive or not


	printf("\nthe really awesome binary number is :: %d\n", c);


				//MEMORY / POINTERS -----------------------------------------------------
				//random notes: each byte is 8 binary characters , or 8 on/off switches


	char aa = 'X';

	char byteName[6];
	strcpy(byteName, ((int)(sizeof(aa) == 1)) ? "byte" : "bytes"); //memcpy <- copies to , from, and num of characters

	printf("\nthe size of a char named aa is::  %d %s, or %d on/off switches\n", (int)sizeof(aa), byteName, (int)sizeof(aa) * 8); 

	printf("memory address of aa::::  %p\n", &aa); //%p <- memory address, value has to be called by reference
	//memory addresses are 16 characters long

	//note::  memory addresses are in hexadecimal form (0 - 9 with A- F) usual decimal form is 0-9

	//----------
	



					//POITNERSSSSSSSS --------

	//advantages of pointers:
	//  -less time in program executions
	//  -working on the original var
	//  -can make data structures (linked list, stack, queue)
	//  -returning more than 1 value from funtions
	//  -searching and sorting large data easier
	//  -dinamic memory allocation

	int age = 23;
	int* oldass = &age; //& gives the address , pointer stores the address !!
	int* old = 22;

	//pointer can be null
	
	printf("\ndereferenced pointer is::: %d, the address is: %p\n", *oldass, oldass);
	//value of a pointer is 8 bytes, or 2^63 numbers, or 64 binary numbers, enough to store the hexadecimal address


	//--------------------------

				//FILE HANDING

	
	FILE* pfWrite = fopen("test.txt", "a"); //w for write, a for append, r for read //FILE data type
	//pointer to the file
	//if file doesnt exist, a new one will be created


	//do not dereference the pointer
	//fprintf(pf, "you......fjdosjgifd"); //print in the file
	//fclose(pf);


				//WRITING TO FILE

	fprintf(pfWrite, "lmao idk\n"); 
	fputs("lmao idk but with fputs\n", pfWrite);
	fclose(pfWrite);
	//NOTE : changes to the text file take effect only after fclose 
	//fclose automatically applies after the code has been executed



	//---
	


			//GET CONTENT FROM FILE ---

	FILE* pfGet = fopen("test.txt", "r"); //w for write, a for append, r for read //FILE data type
											//when getting, use read , when editing,, use write/append

	//NOTE: fopen takes either relative or absolute file path 
	// //note: for absolute file path, \\ slahes need to be double
	//relative to the c file or from desktop


	char content[1000]; //this is a buffer

	if (pfGet != NULL)
	{
		//fgets(content, 1000, pfGet);			//note: if fgets has been invoked before, the next line read is line down
		//fgets(content, 1000, pfGet);
		//printf("line :\t%s\n", content);

		int count = 1;
		while (fgets(content, 1000, pfGet)) { //while loop for reading more than 1 line, true if theres something and false if there isnt
		
			
			//buffer (where memory is stored), amount, and which file from
			printf("line %d:\t%s\n",count, content);
			count++;
			
		};
		fclose(pfGet); //good practice to close the file
	}
	else //if the file doesnt exist
	{
		for (int i = 0; i < 10; i++) {
			printf("\nGET OUTTTTT, UNSUCCESSFUl");
		}; printf("\n");
	};

	//other file handling functions ::
	/*
		getw() <- reads an int
		fputs() <- puts a string
		fputchar() <- puts a char
		fseek() <- moves file pointer position to another locatiron
		SEEK_SET <- moves file pointer to beginning of the file
		SEEK_CUR <- moves file pointer to given location
		SEEK_END <- moves file pointer position to end of file
		ftell() <- gives position of the pointer
		rewind() <- same as SEEK_SET
		getc() <- gets character from file
		getch() <- gets character from keyboard
		getche() <- reads character and echoes to o/p screen
		getchar() <- reads char from keyboard
		putc() <- writes char to file
		putchar () <- writes char to screen
		putc() <- writes char to file
		putchar() <- puts char to screen
		printf() <- writes formatted data to screen 
		srintf() <- writes formatted data to string 
		scanf() <- reads formatted data from keyboard
		remove() <- deletes a file
		fflush() <- flusehs a file
	
	*/

	//----------


	//----------------------

	//struct calling !!! 

	struct Player player1;
	struct Player player2;

	strcpy(player1.username, "swag");
	printf("%s\n", player1.username);

	player1.score = 4;
	
	strcpy(player2.username, "cool");
	printf("%s\n", player2.username);

	player2.score = 4;

	//typedef struct  --

	User user1 = { "super name", "123123", 4234345 }; //calls the members in the struct 
	//no longer need to call the struct keyword when calling the struct

	//--------

	//typedef calling !!!! 
	
	oguser user01 = "lmao"; //user is a data type of char array with 24 characters


	//----------
	


	//ARRAY OF STRUCTS---

	struct Student student1 = { "Spongebob", 3.0f };
	struct Student student2 = { "Patrick", 2.5f };
	struct Student student3 = { "Sandy", 4.0f };
	struct Student student4 = { "Squidward", 2.0f };


	struct Student students[] = { student1, student2, student3, student4 }; 

	for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
		printf("%-10s---- ", students[i].name);
		printf("%.1f\t", students[i].gpa);
	};
	



				// DATAA TYPES --------------

	static int x = 3;			//remains in memory after it's out of scope

				//NOTE: ONLY INTEGERS CAN BE SIGNED / UNSIGNED
	signed int y = 3;			// <---- all variables are already signed by default
	short int z = 453;			// <---- 2 bytes, stores half the regular int

	const float pie = 3.149f;			//const, same as c++

	short v = 432;			//same as a short int, just dont need the int part

	long long int bigboy = 439589835875893;				//-9 to 9 quintillion , 8 bytes , %lld to output it
				//long long because int is long by default, long long just expands it
	unsigned long long int biggerboy = 1355354435434378657U;			//0 to 18 quintillion , 8 bytes
				//note: if integer is too big and gives a warning, put a U at the end to signify that it's unsigned

				//note : if number is beyond the maximum value, itll reset and return to the maximum negative value 

	float hii = 4.323454f; 
	double h = 3.568;			//whoa, 8 bytes 
	char piss = 'a';			//char
	char pissNumber = 100; 
				//can store a variable in a char between -128 adn 127, %d or %c, 1 byte of memory
	unsigned char positivity = 100;				// 0 to 255, because cant be negative, if beyond 255 itll reset to 0
	char nameButLoud = toupper(piss);			//makes a character uppercase
	printf("%c \n", nameButLoud);

				//note: if %c is used to output, itll be automatically converted in accordance with the ascii table

	bool ucfisHUGEEE = true;			//true or false, outputs as %d (number) 
				//c isnt object oriented so PISS !!!!
	
				//---------------------------------



				//STRINGGSSS ---------
				// 
				//no strings!
				//but can make a char array
	char name[] = "pissman certified";			//string 
	printf("there was this guy and he was %s \n", name);			//%s is for a string

				//note: can specify the string length if need be, if blank itll pick the length assigned to it.
				//note: has to be 1 more for the \0 or the null termination character



				//string functions --- ,,, same as c++

	char string1[9] = "Joe";			//note: if needs strign to be bigger, specify the strign length beforehand
	char string2[] = "Biden";

				//	_strlwr(string1);			// converts a string to lowercase
				//	_strupr(string1);			// uppercase 
				//note: WATCH OUT FOR BUFFER OVERFLOWSSSS
				//	strncat(string1, string2, 1);		//appends n characters from string
				//	strcpy(string1, string2);			//string copy string2 to string1
				//  strncopy(string1, string2);			//string copy n characters
				    strcat(string1, string2);			// concatanates 2 strings together into the first string
				    _strset(string1, '?');				//sets all characters of a string to a character
				    _strnset(string1, 'G', 5);			//sets the first n characters of a string to given character
				    _strrev(string1);					//reverses a string

	int result1 = (int)strlen(string1);			//length of string , common
	bool result2 = strcmp(string1, string2);			//boolean which compares the strings and sees if theyre the same , can be an int too
	bool result3 = strncmp(string1, string2, 2);			//compare of n first characters 
	int result4 = _strcmpi(string1, string2);			//i for ignore case sensitive
	int result5 = _strnicmp(string1, string2, 1);			//ignore case, n characters


	printf("\n %s \n", string1);

				//---------------


				//STRING SWAP -------------

	char xx[] = "we are 95% confident"; 
	char yy[21] = "we fail to reject"; 
	char temp[21];
	
	strcpy(temp, yy);   //replaces temp with x
	strcpy(yy, xx);	   //replaces x with y
	strcpy(xx, temp);   //replaces y with temp

	printf("\nx = %s\n", xx);
	printf("\ny = %s\n", yy);

	

				//FOR LOOPS --------------

				// continue; = skips rest of code and forces next iteration of the loop
				// break; = exits a loop/switch

				//---------------------




				//ARRAYS ---------

	double prices[] = { 5.3,4.3,10.3,13.5,13432.5};			//value and index are different, the value starts at 1 while index starts at 0

	printf("\n hiiii this is from an array: %lf \n", prices[0]);

	//array sorting function call --
	
	int size = sizeof(prices) / sizeof(prices[0]); //getting the size within the function is a bad practice because c treats array parameters as pointers
	printf("\n result of a bubble sort listing algorithm:::\n");
	bubbleSort(prices, size);
	printArr(prices, size);



				//--------------




				//2D ARRAY -------
				//an array of arrays !!! 
				//useful for a matrix, grid, or table of data

	int cool[][3] = { //optional to specify the row count but REQUIRED to set up the column count
						{1,2,3},
						{4,5,6}
					 };			//1st []: array //2nd []: array within
				
	printf("\n hiiii this is a number from a 2d artray: %d \n", cool[0][2]);

	int rows = sizeof(cool) / sizeof(cool[0]); //sizeof counts the byte size
	int columns = sizeof(cool[0])/sizeof(cool[0][0]); //byte size of entire column divided by size fo the data type
	printf("this is the size of the array in row / column : %d\n\n", columns);
						//----------------------------------






						//ARRAY OF STRINGS -----------


	char cars[][10] = {"swag","joe","hundai"}; //max character size of 9 for each string

	//cars[0] = "tesla" // cant directly assign a new strign to existing one
	strcpy(cars[0], "tesla"); //copy string instead

	for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
		printf("%s\t", cars[i]);

		if (i == sizeof(cars) / sizeof(cars[0]) - 1) {
			printf("\n");
		}
	};


	unsigned int booo = 23;				//unsigned means the number cant be negative 
				//unsigned = positive only 
				//%u for unsigned int
				//%d for signed int


				//note : have to make a format specifier 
	printf("i like mac and cheessee %d hahaha \n", x);			//have to specify the data type, here beind %d, and c puts it in there

	printf("i like mac and cheessee %c sfhshfahfdkhj \n this is a long long integer: %lld \n this is an unsigned long long int: %llu \n", pissNumber, bigboy, biggerboy);			
				//pissNumber, int to char conversion via ascii
	
				// this ex it's converting to b

				// %f is for float, %f is for float, %lf is for long float
	printf("there was this guy and he was %s \n", name);			//%s is for a string

	printf("wassup hoe");
	printf("\n");
	printf("\"we wuz kangz and shieeet\" -tyrone \n");			//\" allows to put double quotes in output



				//FLOAT PRECISION!!!! -------------------
				// .1 , .2 , etc will specify till which decimal, and will round the number


	printf("float precision !!! : %.2lf", h);
	printf("\n");	

				//--------------

	

	//RANDOM !!!!!!!-----------------

	srand((int)time(0));
	int randomNumber = (rand()%10);
	int randNinRange = (rand() % 100) + 1; //random number from 1 (min) to 100 (max)





				//FIELD WIDTh ----------
				//1 , 2 , etc		specifies the character width allocated for the output variable

	printf("field width !!! : %20lf", h); 
	printf("\n"); 

	
	printf("field width but from the left !!! : %-20lf lmaoooo", h); 
	printf("\n");
				//---------------



				//funcion calls

	birthday();
	superBirthday(name);
	printf("multiplication isss ::: %d \n", multiply(2, 4));
				//superBirthday();
				//--------



				//MATH !!! -------------

	double A = sqrt(9);
	double B = pow(2, 4);			//2 to the power of 4
	double C = round(3.14);				//round
	double D = ceil(3.423423);				//round up , floor is for round down
	double E = fabs(-100);			//absolute value
	double F = log(3);			//log base 10 
				//sin cos and tan are all included too




				//INPUT!!!!!!! ---------

				//use scanf

				//data type followed b y the variable it's stored in 
				

	int input;
	

	printf("PUT A NUMBER RRRRR \n");

	(void)scanf("%d", &input); //stores input in the address of the integer input
	
	printf("the bullshit number u just put is::: %d", input);
	
				//----------



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
	return 0;
};


