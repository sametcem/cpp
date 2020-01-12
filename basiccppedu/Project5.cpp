// Project5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void incrementAndPrint()
{
	static int s_value = 1; // static duration via static keyword.  This line is only executed once.
	++s_value;
	std::cout << s_value << '\n';
} // s_value is not destroyed here, but becomes inaccessible

int generateID()
{
	static int s_itemID = 1;
	return s_itemID++; // makes copy of s_itemID, increments the real s_itemID, then returns the value in the copy
}

int main()
{

	incrementAndPrint();
	incrementAndPrint();
	incrementAndPrint();

	std::cout <<generateID()<< "\n";



	std::cout << "Enter an integer: ";
	int x;
	std::cin >> x;

	std::cout << "Enter another integer: ";
	int y;
	std::cin >> y;

	if (x == y)
		std::cout << x << " equals " << y << "\n";
	if (x != y)
		std::cout << x << " does not equal " << y << "\n";
	if (x > y)
		std::cout << x << " is greater than " << y << "\n";
	if (x < y)
		std::cout << x << " is less than " << y << "\n";
	if (x >= y)
		std::cout << x << " is greater than or equal to " << y << "\n";
	if (x <= y)
		std::cout << x << " is less than or equal to " << y << "\n";

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
