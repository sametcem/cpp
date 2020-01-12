// Project15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath> // for sqrt() function
//The goto statement is a control flow statement that causes the CPU to jump to another spot in the code.

int main()
{
	double x;
	tryAgain: // this is a statement label
	std::cout << "Enter a non-negative number";
	std::cin >> x;

	if (x < 0.0)
		goto tryAgain; // this is the goto statement

	std::cout << "The sqrt of " << x << " is " << sqrt(x) << std::endl;
	return 0;
}