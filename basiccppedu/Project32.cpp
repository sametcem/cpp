// Project32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>



//the fixed array will decay (be implicitly converted) into a pointer that points to the first element of the array. You can see this in the following program:

// parameter ptr contains a copy of the array's address
void changeArray(int *ptr)
{
	*ptr = 5; // so changing an array element changes the _actual_ array
}

int main()
{
	int crray[] = { 1, 1, 2, 3, 5, 8, 13, 21 };
	std::cout << "Element 0 has value: " << crray[0] << '\n';

	changeArray(crray);

	std::cout << "Element 0 has value: " << crray[0] << '\n';

	int brray[5] = { 9, 7, 5, 3, 1 };

	// dereferencing an array returns the first element (element 0)
	std::cout << *brray; // will print 9!

	char name[] = "Jason"; // C-style string (also an array)
	std::cout << *name; // will print 'J'

	int array[5] = { 9, 7, 5, 3, 1 };

	// print address of the array's first element
	std::cout << "Element 0 has address: " << &array[0] << '\n';

	// print the value of the pointer the array decays to
	std::cout << "The array decays to a pointer holding address: " << array << '\n';


	return 0;
}