// cpppracticing.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <memory>
#include <string>
#include <forward_list>

#include "header.h"



int myAtoi(std::string s) {
	int out = 0;
	bool neg = false;
	for (char& c : s) {
		if (out > INT_MAX / 10) return INT_MAX;
		if (-out < INT_MIN / 10) return INT_MIN;


		if (c == 45) neg = true;
		else if (c > 47 && c < 58) out = out * 10 + (c - 48);
		else if (c != 32) break;
		//division and modulus are compile operations, while the conditional is run-time 
		//can treat char as a decimal int    
	}
	return neg ? -out : out;
	//return (int)'-'-48;
}

int main()
{
	practice hi("fdhsfjd");
;	hi.print();

	std::cout << '\n';

	practice hi2;
	hi2.print();

	

	std::forward_list<std::string>link;

	link.push_front("fsdgffg");
;	link.push_front("fsdgffg");
;	link.push_front("thomas");
;	link.push_front("thomas");
;	link.push_front("not thomas");
;	link.push_front("fsdgffg");
;

	//std::forward_list<std::string>::iterator c;
	//
	//c = link.begin();
	//
	//while (c!= link.end())
	//{
	//	c++;
	//}
	link.remove("thomas");	;	//finds all instance of thomas


	//link.remove_if(i == "jennifer");
;	
	std::forward_list<std::string>::iterator c;
	c = link.begin();
	
	while (c != link.end())
	{
		std::cout << *c << '\t';
		c++;
	};
	
	

	std::cout << myAtoi("345");

	std::cin.get();
	return 0;
}
