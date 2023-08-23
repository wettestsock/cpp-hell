
#include <iostream>
#include <random>   //RANDOM NUM GENERATION n other statistics fuinctions
//note: srand and rand work fine theyre just not really random
#include "header.h"



int main()
{

	std::random_device r;
	std::uniform_int_distribution<int> range(1, 9);
	std::cout << range(r);

	std::cout << "Hello CMake." << '\n';
	std::cin.get();
	return 0;
}
