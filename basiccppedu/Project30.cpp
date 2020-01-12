// Project30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


int main()
{
	char *chPtr; // chars are 1 byte
	int *iPtr; // ints are usually 4 bytes

	struct Something
	{
		int nX, nY, nZ;
	};
	Something *somethingPtr; // Something is probably 12 bytes

	std::cout << sizeof(chPtr) << '\n'; // prints 4
	std::cout << sizeof(iPtr) << '\n'; // prints 4
	std::cout << sizeof(somethingPtr) << '\n'; // prints 4


	//As you can see, the size of the pointer is always the same. This is because a pointer is just a memory address,
	//and the number of bits needed to access a memory address on a given machine is always constant.

	int value = 5;
	int *ptr = &value; // ptr points to value

	*ptr = 7; // *ptr is the same as value, which is assigned 7
	std::cout << value; // prints 7
}

