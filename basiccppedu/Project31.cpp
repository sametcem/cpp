// Project31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstddef> // for NULL

void print(int x)
{
	std::cout << "print(int): " << x << '\n';
}

void print(int *x)
{
	if (!x)
		std::cout << "print(int*): null\n";
	else
		std::cout << "print(int*): " << *x << '\n';
}

int main()
{
	int *x{ NULL };
	print(x); // calls print(int*) because x has type int*
	print(0); // calls print(int) because 0 is an integer literal
	print(NULL); // likely calls print(int), although we probably wanted print(int*)

	return 0;
}