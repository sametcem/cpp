// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Command-Line Arguments
/*
The first parameter, conventionally called argc, will be assigned an integer value indicating the number 
of command-line arguments. This will always be at least one, as the name of the program itself 
(which must have been given to invoke it) is the first argument passed to the program. 
Variable argv looks strange: it is an array (table): a collection of strings containing command-line arguments. 
The numbering starts from 0 and is indicated by an integer in square brackets 
*/

#include "pch.h"
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
	cout << "Program name " << argv[0] << endl
		<< "Number of arguments: " << argc << endl;
	for (int i = 1; i < argc; i++)
		cout << "Argument nr " << i << " is "
		<< argv[i] << endl;
}

/*
cpp> g++ -o arguments arguments.cpp
	cpp> ./arguments 12 a "b c" 'd e'
	Program name ./arguments
	Number of arguments: 5
	Argument nr 1 is 12
	Argument nr 2 is a
	Argument nr 3 is b c
	Argument nr 4 is d e
*/