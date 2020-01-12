// Project17.cpp : This file contains the 'main' function. Program execution begins and ends there.

//The statement in a do-while loop always executes at least once. After the statement has been executed, 
//the do-while loop checks the condition. If the condition is true, the path of execution jumps back 
//to the top of the do-while loop and executes it again.


//Do-while
//For
#include "pch.h"
#include <iostream>

int main()
{
	// selection must be declared outside do/while loop
	int selection;

	do
	{
		std::cout << "Please make a selection: \n";
		std::cout << "1) Addition\n";
		std::cout << "2) Subtraction\n";
		std::cout << "3) Multiplication\n";
		std::cout << "4) Division\n";
		std::cin >> selection;
	} while (selection != 1 && selection != 2 &&
		selection != 3 && selection != 4);

	// do something with selection here
	// such as a switch statement

	std::cout << "You selected option #" << selection << "\n";

	for (int count = 9; count >= 0; --count)
		std::cout << count << " ";

	int iii, jjj;
	for (iii = 0, jjj = 9; iii < 10; ++iii, --jjj)
		std::cout << iii << " " << jjj << '\n';
	return 0;
}
