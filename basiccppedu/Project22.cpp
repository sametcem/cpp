// Project22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

struct Rectangle
{
	int length;
	int width;
};

enum ArrayElements
{
	MAX_ARRAY_LENGTH = 5
};

void printSize(int array[])
{
	std::cout << sizeof(array) << '\n'; // prints the size of a pointer, not the size of the array!
}

int main()
{
	int array[MAX_ARRAY_LENGTH]; // Ok
	int crr[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
	std::cout << "The array has: " << sizeof(crr) / sizeof(crr[0]) << " elements\n"; // Determining the length of a fixed array prior to C++17
	//  array size = array length * element size.

	std::cout << "The array has: " << std::size(crr) << " elements\n"; // a better option is to use the std::size() function, which is defined in the <iterator> header.

	
	std::cout << sizeof(array) << '\n'; // will print the size of the array
	printSize(array);


	
	Rectangle rects[5];
	rects[0].length = 22;
	rects[0].width = 15;


	int prime[5]; // hold the first 5 prime numbers
	prime[0] = 2; // The first element has index 0
	prime[1] = 3;
	prime[2] = 5;
	prime[3] = 7;
	prime[1+3] = 11; // The last element has index 4 (array length-1)

	std::cout << "The lowest prime number is: " << prime[0] << "\n";
	std::cout << "The sum of the first 5 primes is: " << prime[0] + prime[1] + prime[2] + prime[3] + prime[4] << "\n";


	// Initialize all elements to 0
	int brr[5] = { };

	return 0;
}