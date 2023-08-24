
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


//template declaration n implementation have to BOTH be in header file
//template has to be declared before the function / struct  / class it's going to be used in
template<typename T> T maxVal(T x, T y) {
	return x > y ? x : y;
}



//template can act as a placeholder, or a template
//create a c-style array on the stack instead of compile time

template<typename T, int N> //can declare multiple placeholder
class array {
private: 
	T m_Array[N];
public:
	const int getSize() { return N; }
};
