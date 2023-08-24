#include <iostream>
#include <cmath>
#include <vector>
#include <string>

#include "header.h"


friends::friends() {
	FList = { "You have no friends." };
};

friends::friends(const std::vector<std::string> FInput) {

};

std::ostream& operator<<(std::ostream& out, const friends& f) {
	
	return out;
}
int oldRand(const int& max) {
	return rand() % (max + 1); //gives an int from 0 to max, great for finding quick random #
}
int oldRandRange(const int& min, const int& max) {
	return rand() % (max - min + 1) + min; //removes the max sway then adds it back 
	//gives a # in a range
}




//VARIADIC ARGS AND VARIADIC FUNCTION TEMPLATES
//-------