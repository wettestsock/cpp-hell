#include <stdio.h>

#include <stdbool.h>			//booleans!
#include <math.h>			//math!!!
#include <ctype.h>			//a lot of functions for string manipulaiton
#include <string.h>				//string functions
#include "outsideMain.c" //connects this c file to outsideMain (structs and typedef)

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

//ARRAY OF STRUCTS ---------------

struct Student {
	char name[12];
	float gpa;
};







int main() {			//note: main can also be an integer

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
		printf("%s\n", students[i].name);
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
				//	strncat(string1, string2, 1);			//appends n characters from string
				//	strcpy(string1, string2);			//string copy string2 to string1
				//  strncopy(string1, string2);				//string copy n characters
		strcat(string1, string2);			// concatanates 2 strings together into the first string
		_strset(string1, '?');			//sets all characters of a string to a character
		_strnset(string1, 'G', 5);			//sets the first n characters of a string to given character
		_strrev(string1);			//reverses a string

	int result1 = strlen(string1);			//length of string , common
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
				//note::: has to be passed BY REFERENCE !! ^

	int input;
	

	printf("PUT A NUMBER RRRRR \n");

	(void)scanf("%d", &input);
	
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


