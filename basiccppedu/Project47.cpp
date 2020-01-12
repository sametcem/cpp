// Project47.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>

//Introduced in C++03, std::vector provides dynamic array functionality that handles its own memory management.
int main()
{
	// no need to specify length at initialization
	std::vector<int> array;
	std::vector<int> array2 = { 9, 7, 5, 3, 1 }; // use initializer list to initialize array
	std::vector<int> array3{ 9, 7, 5, 3, 1 }; // use uniform initialization to initialize array (C++11 onward) 

	array[6] = 2; // no bounds checking
	array.at(7) = 3; // does bounds checking

	array = { 0, 1, 2, 3, 4 }; // okay, array length is now 5
	array = { 9, 8, 7 }; // okay, array length is now 3


	std::vector<int> array5{ 0, 1, 2 };
	array5.resize(5); // set size to 5

	std::cout << "The length is: " << array5.size() << '\n';

	for (auto const &element : array5)
		std::cout << element << ' ';

	std::vector<bool> array77{ true, false, false, true, true };
	std::cout << "The length is: " << array77.size() << '\n';

	for (auto const &element : array77)
		std::cout << element << ' ';

	return 0;

}

