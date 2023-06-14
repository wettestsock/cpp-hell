// cpppracticing.cpp : Defines the entry point for the application.
//

#include <iostream>
#include <memory>
#include <string>
#include <forward_list>

#include "header.h"





int main()
{
	practice hi("fdhsfjd");
	hi.print();

	std::cout << '\n';

	practice hi2;
	hi2.print();

	

	std::forward_list<std::string>link;

	link.push_front("fsdgffg");
	link.push_front("fsdgffg");
	link.push_front("thomas");
	link.push_front("thomas");
	link.push_front("thomas");
	link.push_front("fsdgffg");


	//std::forward_list<std::string>::iterator c;
	//
	//c = link.begin();
	//
	//while (c!= link.end())
	//{
	//	c++;
	//}
	link.remove("thomas");		//finds first instance of thomas


	//link.remove_if(i == "jennifer");
	
	std::forward_list<std::string>::iterator c;
	c = link.begin();
	
	while (c != link.end())
	{
		std::cout << *c << '\t';
		c++;
	}
	


	std::cin.get();
	return 0;
}
