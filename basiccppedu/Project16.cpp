// Project16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//while
// Iterate through every number between 1 and 50
int main()
{
	int count = 1;
	while (count <= 50)
	{
		// print the number (pad numbers under 10 with a leading 0 for formatting purposes)
		if (count < 10)
			std::cout << "0" << count << " ";
		else
			std::cout << count << " ";

		// if the loop variable is divisible by 10, print a newline
		if (count % 10 == 0)
			std::cout << "\n";

		// increment the loop counter
		++count;
	}

	int outer = 1;
	while (outer <= 5)
	{
		// loop between 1 and outer
		int inner = 1;
		while (inner <= outer)
			std::cout << inner++ << " ";

		// print a newline at the end of each row
		std::cout << "\n";
		++outer;
	}


	return 0;
}


