// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.


//The actual content of the header file, which should be the forward declarations for all of the identifiers we want other files to be able to see. 

#include "pch.h"
#include <iostream>
#define MY_NAME "ALEX" // OBJECT LIKE MACROS
#define PRINT_JOE

void doSomething(); // forward declaration for function doSomething()

#define PRINT


int main()
{

	doSomething();


#ifdef PRINT_JOE // if PRINT_JOE is defined
	std::cout << "Joe\n"; // execute this code
#endif
//#ifndef is the opposite of #ifdef
#ifdef PRINT_BOB // if PRINT_BOB is defined
	std::cout << "Bob\n"; // execute this code
#endif

	std::cout << "My name is: " << MY_NAME;
	return 0;
}

