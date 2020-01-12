// Project18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int sum = 0;

	// Allow the user to enter up to 10 numbers
	for (int count = 0; count < 10; ++count)
	{
		std::cout << "Enter a number to add, or 0 to exit: ";
		int num;
		std::cin >> num;

		// exit loop if user enters 0
		if (num == 0)
			break;

		// otherwise add number to our sum
		sum += num;
	}

	std::cout << "The sum of all the numbers you entered is " << sum << "\n";



	return 0;
}