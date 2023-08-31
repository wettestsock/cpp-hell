// CMakeProject2.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <array>

#define n '\n'

class Solution {
public:
	bool isPalindrome(int x) {
		int back = 0;

		if (abs(x) != x) {
			return false;
		}
		while (x != 0)
		{
			back = back * 10 + x % 10;
			// pushes back forward (by 10), in beginning 0 
			// adds x modulus 10 (last integer)
			// divides x by 10
			x /= 10;
			std::cout << back << '\n';
		}

		return ((int)back != x) ? false : true;
	}
};

bool dCompare(double& a, double& b) {
	return fabs(a - b) < DBL_EPSILON;
}

int main()
{

    Solution hi;

    std::cout<<hi.isPalindrome(2112);

	double a = 1.0 / 3;
	//std::cout << a;
	double b = 1/3.0;!

	if (dCompare(a, b))
	{
		std::cout << n<< "it did !! " << n;
	}
	else {
		std::cout << n<< "it didnt print!!!!!!!!!!" << n;
	}
	
	////unsigned int w, b, d, s;
    //
	//int dThrow;
	//std::vector<std::array<double, 2>> dCoords;
	////std::cin >> w >> b >> d >> s;
	//std::cin >> dThrow;
	//for (int i = 0; i < dThrow; i++) {
	//	std::cout << "hi";
	//	std::cin >> dCoords[i][0] >> dCoords[i][1];
    //
	//}


	//std::cout << round((1.3039247*1000))/1000;
}
