#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <memory>
#include <string>
#include "header.h"


practice::practice(): hi("get outa here") {
	std::cout << "empty you dork!!\n";

}

practice::practice(std::string print): hi(print) { //member initializer list , auto sets hi to input print
	std::cout << "constructor constructed\n";
	
}

void practice::print() {
	std::cout << hi << '\n';
	return;
}


