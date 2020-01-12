// Project29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//The address-of operator (&) allows us to see what memory address is assigned to a variable
//Getting the address of a variable isn’t very useful by itself.

//The dereference operator (*) allows us to access the value at a particular address :
//A pointer is a variable that holds a memory address as its value.

int main()
{
	int sal = 5;
	std::cout << &sal; // prints address of value
	std::cout << sal; // prints contents of value

	int *prr = &sal; // ptr points to value
	std::cout << prr; // prints address held in ptr, which is &value
	std::cout << *prr; // dereference ptr (get the value that ptr is pointing to)

	int value = 5;
	int *ptr = &value; // initialize ptr with address of variable value

	std::cout << &value << '\n'; // print the address of variable value
	std::cout << ptr << '\n'<< std::endl; // print the address that ptr is holding
	std::cout << *ptr << '\n' << std::endl;
	std::cout << value << '\n' << std::endl;


	int x = 5;
	std::cout << x << '\n'; // print the value of variable x
	std::cout << &x << '\n'; // print the memory address of variable x
	std::cout << *(&x) << '\n'; /// print the value at the memory address of variable x (parenthesis not required, but make it easier to read)

	return 0;
}