// Project44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int value = 5;

	int *ptr = &value;
	std::cout << *ptr << std::endl; // dereference pointer to int to get int value

	int **ptrptr = &ptr;
	std::cout << **ptrptr << std::endl; // first dereference to get pointer to int, second dereference to get int value

	int ***p = &ptrptr;
	std::cout << ***p << std::endl;

	int ****pt = nullptr;
	std::cout << ****pt;
}

