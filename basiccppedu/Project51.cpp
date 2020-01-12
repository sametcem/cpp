// Project51.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void printCString(const char *str)
{
	// While we haven't encountered a null terminator
	while (*str != '\0')
	{
		// print the current character
		std::cout << *str;

		// and point str at the next character
		++str;
	}
}

int main()
{
	printCString("Hello world!");

	return 0;
}