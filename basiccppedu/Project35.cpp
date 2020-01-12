// Project35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int main()
{
	char myName[] = "Alex";
    cout << myName << endl; 

	// C++ also supports a way to create C-style string symbolic constants using pointers:
	const char* myNamep = "Alex";
	cout << myNamep << endl;


	//At this point, you may have noticed something interesting about the way std::cout handles pointers of different types.


	int nArray[5] = { 9, 7, 5, 3, 1 };
	char cArray[] = "Hello!";
	const char *name = "Alex";

	std::cout << nArray << '\n'; // nArray will decay to type int*
	std::cout << cArray << '\n'; // cArray will decay to type char*
	std::cout << name << '\n'; // name is already type char*

	/*
	 if you pass it an object of type char* or const char*, it will assume you’re intending to print a string.
	 Consequently, instead of printing the pointer’s value, it will print the string being pointed to instead!
	 */

	char c = 'Q';
	std::cout << &c;

	/*
	In this case, the programmer is intending to print the address of variable c. 
	However, &c has type char*, so std::cout tries to print this as a string! */
	// it assumed &c (which has type char*) was a string.


	return 0;
}

