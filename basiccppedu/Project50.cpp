// Project50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void swapping(int &a, int&b) {
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a = 6;
	int b = 8;

	swapping(a, b);

	if(a == 8 && b == 6)
		std::cout << "It works!";
	else
	std::cout << "It's broken!";

	return 0;
}
