// Project11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Typedefs allow the programmer to create an alias for a data type, and use the aliased name instead of the actual type name

#include "pch.h"
#include <iostream>

int main()
{
	typedef double distance_t; // define distance_t as an alias for type double

// The following two statements are equivalent:
	double howFar;
	distance_t howFar;

	typedef long miles_t;
	typedef long speed_t;

	miles_t distance = 5;
	speed_t mhz = 3200;

	// The following is valid, because distance and mhz are both actually type long
	distance = mhz;

	std::cout << distance<<std::endl;

	std::int8_t i(97); // int8_t is actually a typedef for char
	std::cout << i;
	return 0;
}

