// Project33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	int arr[5] = { 9, 7, 5, 3, 1 };

	std::cout << &arr[1] << '\n'; // print memory address of array element 1
	std::cout << arr + 1 << '\n'; // print memory address of array pointer + 1 

	std::cout << arr[1] << '\n'; // prints 7
	std::cout << *(arr + 2) << '\n'; // prints 7 (note the parenthesis required here)


	int value = 7;
	int *ptr = &value;

	std::cout << ptr << '\n';
	std::cout << ptr + 1 << '\n';
	std::cout << ptr + 2 << '\n';
	std::cout << ptr + 3 << '\n';


	int array[] = { 9, 7, 5, 3, 1 };

	std::cout << "Element 0 is at address: " << &array[0] << '\n';
	std::cout << "Element 1 is at address: " << &array[1] << '\n';
	std::cout << "Element 2 is at address: " << &array[2] << '\n';
	std::cout << "Element 3 is at address: " << &array[3] << '\n';

	return 0;
}

