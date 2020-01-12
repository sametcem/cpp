// Project24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <algorithm> // for std::swap, use <utility> instead if C++11

int main()
{
	int x = 2;
	int y = 4;
	std::cout << "Before swap: x = " << x << ", y = " << y << '\n';
	std::swap(x, y); // swap the values of x and y
	std::cout << "After swap:  x = " << x << ", y = " << y << '\n';
}