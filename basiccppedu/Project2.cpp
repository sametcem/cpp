// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "add.h" // Insert contents of add.h at this point.  Note use of double quotes here.
//The actual content of the header file, which should be the forward declarations for all of the identifiers we want other files to be able to see.
int main()
{
	std::cout << "The sum of 3 and 9 is " << add(3, 9) << '\n';
	int g = 0;
	return 0;
}
