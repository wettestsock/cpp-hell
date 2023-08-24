
#include <iostream>
#include <random>   //RANDOM NUM GENERATION n other statistics fuinctions
//note: srand and rand work fine theyre just not really random
#include <ctime>
#include "header.h"
#define n '\n'





int main()
{

	//c-style rand # generation, functions in utils.cpp
	srand(time(0));
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
