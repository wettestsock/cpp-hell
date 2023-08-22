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

std::ostream& operator<< (std::ostream& out, const friends f) {
	
	return out;
}
