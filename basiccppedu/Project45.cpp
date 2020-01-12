// Project45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <array>



int main()
{
	std::array<int, 3> myArray; // declare an integer array with length 3
	std::array<int, 5> myArray1 = { 9, 7, 5, 3, 1 }; // initialization list
	std::array<int, 5> myArray2{ 9, 7, 5, 3, 1 }; // uniform initialization

	std::cout << myArray1[1] << std::endl;

	for (int i : myArray1) {
		std::cout << i;
	}

	std::array<double, 5> myArray{ 9.0, 7.2, 5.4, 3.6, 1.8 };
	std::cout << "length: " << myArray.size();

	return 0;
}

