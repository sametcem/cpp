// Project37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <utility> // for std::swap, if you're not C++11 compatible, #include <algorithm> instead

void sortArray(std::string *array, int length) {
	
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] < array[smallestIndex])
				smallestIndex = currentIndex;
		}
		std::swap(array[startIndex], array[smallestIndex]);
	}

}


int main()
{
	int length;
	std::cout << "How many names do you wish to enter?" << std::endl;
	std::cin >> length;

	std::string *names = new std::string[length];

	for (int i = 0; i < length; i++) {
		std::cout << "Enter name #" << i + 1 << ": ";
		std::cin >> names[i];
	}

	sortArray(names, length);

	std::cout << "\nHere is your sorted list:\n";
	for (int i = 0; i < length; ++i)
		std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';

	
	delete[] names; // don't forget to use array delete
	// we don't need to set names to nullptr/0 here because it's going to go out of scope immediately after this anyway
}

