
#include <iostream>
#include <random>   //RANDOM NUM GENERATION n other statistics fuinctions
//note: srand and rand work fine theyre just not really random
#include <ctime>
#include <cmath>

#include "header.h"
#define n '\n'





int main()
{

	
	//TEMPLATES 
	//dynamically allocated data type (cool and awesome)
	std::cout << maxVal(3, 5) <<n;
	//note: template functions HAVE to be both defined n implemented in the HEADER FILE
	//can make separate header file just for the template functions
	//why? because compiler needs to instanciate different 


	array<int, 5> superCoolArr; //array of 5 ints
	array<std::string, 5> stringArr; //array of 5 ints
	std::cout << superCoolArr.getSize() << n << stringArr.getSize()<<n;
	//look in header for documentation



	std::cout << DBL_EPSILON;
	//dbl, flt, and ldbl epsilons exist 

	//c-style rand # generation, functions in utils.cpp
	srand((unsigned int)time(0));
	std::cout << oldRand(29)<<n;
	std::cout << oldRandRange(0, 3000) << n;
	
	//c++ style way of random ints
	std::random_device r;
	std::uniform_int_distribution<int> range(10, 9999); 
	std::cout << range(r) <<n << range(r) << n;


	//c++ style way for random floats+
	std::uniform_real_distribution<double> fRange(10.23, 10.432); 
	std::cout << fRange(r)<< n << fRange(r)<<n;
	

	
	std::cout << "Hello CMake." << n;
	std::cin.get();

	return 0;
}
