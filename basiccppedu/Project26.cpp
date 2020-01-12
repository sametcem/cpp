// Project26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm> // for std::sort

int main()
{
	const int length = 5;
	int array[length] = { 30, 50, 20, 10, 40 };

	std::sort(array, array + length);

	for (int i = 0; i < length; ++i)
		std::cout << array[i] << ' '<< std::endl;


	int brr[3][5] =
	{
	{ 1, 2 }, // row 0 = 1, 2, 0, 0, 0
	{ 6, 7, 8 }, // row 1 = 6, 7, 8, 0, 0
	{ 11, 12, 13, 14 } // row 2 = 11, 12, 13, 14, 0
	};

	/*
	for (int row = 0; row < numRows; ++row) // step through the rows in the array
    for (int col = 0; col < numCols; ++col) // step through each element in the row
        std::cout << array[row][col];
	*/


	// Declare a 10x10 array
	const int numRows = 10;
	const int numCols = 10;
	int product[numRows][numCols] = { 0 };

	// Calculate a multiplication table
	for (int row = 0; row < numRows; ++row)
		for (int col = 0; col < numCols; ++col)
			product[row][col] = row * col;

	// Print the table
	for (int row = 1; row < numRows; ++row)
	{
		for (int col = 1; col < numCols; ++col)
			std::cout << product[row][col] << "\t";

		std::cout << '\n';
	}

	return 0;
}