// Project39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

void printElements(int(&arr)[4]) {
	
	int length{ sizeof(arr) / sizeof(arr[0]) };

	for (int i{ 0 }; i < length; i++) {
		std::cout << arr[i]+10 << std::endl;
	}
}


int main()
{
	int arr[]{ 99,20,134,80 };
	printElements(arr);
	return 0;
}
