#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <memory>
#include "header.h"


struct node {
	std::string x;
	node* next;
};


practice::practice(std::string print): hi(print) {
	std::cout << "constructor constructed\n";
	
};

void practice::print() {
	std::cout << hi;
}