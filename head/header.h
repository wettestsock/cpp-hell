
#pragma once

#include <iostream>
#include <vector>
#include <string>
#include <time.h>




class friends {
private:
	std::vector<std::string> FList;
public:
	friends();
	friends(const std::vector<std::string> FInput);
	
	
};

std::ostream& operator<<(std::ostream& out, const friends& f);

int oldRand(const int& max);
int oldRandRange(const int& min, const int& max);