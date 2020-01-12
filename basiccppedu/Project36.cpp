// Project36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


//To allocate an array dynamically, we use the array form of new and delete (often called new[] and delete[]):
int main()
{
	std::cout << "Enter a positive integer: ";
	int length;	
	std::cin >> length;

	int *array = new int[length]; // use array new.  Note that length does not need to be constant!

	std::cout << "I just allocated an array of integers of length " << length << '\n';

	array[0] = 5; // set element 0 to value 5

	delete[] array; // use array delete to deallocate array

	// we don't need to set array to nullptr/0 here because it's going to go out of scope immediately after this anyway
	/*
	When deleting a dynamically allocated array, we have to use the array version of delete, which is delete[].
	This tells the CPU that it needs to clean up multiple variables instead of a single variable.
	One of the most common mistakes that new programmers make when dealing with dynamic memory allocation is to use delete
	instead of delete[] when deleting a dynamically allocated array. Using the scalar version of delete on an array
	will result in undefined behavior, such as data corruption, memory leaks, crashes, or other problems.
	
	*/

	return 0;
}


