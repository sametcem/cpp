// Project19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int count(0); // count how many times the loop iterates
	while (true) // loop until user terminates
	{
		std::cout << "Enter 'e' to exit this loop or any other character to continue: ";
		char ch;
		std::cin >> ch;

		if (ch == 'e')
			break;

		++count;
		std::cout << "We've iterated " << count << " times\n";
	}

	int counta(0);
	do
	{
		if (counta == 5)
			continue; // jump to end of loop body
		std::cout << counta << " ";

		// The continue statement jumps to here
	} while (++counta < 10); // this still executes since it's outside the loop body

	
	return 0;
}