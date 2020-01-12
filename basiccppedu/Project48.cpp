// Project48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

enum ItemTypes {
	ITEM_HEALTH_POTION,
	ITEM_TORCH,
	ITEM_ARROW,
	MAX_ITEMS
};

int countTotalItems(int *items) {
	int totalItems = 0;
	for (int i = 0; i < MAX_ITEMS; i++) {
		totalItems += items[i];
	}

	return totalItems;
}

int main()
{
	int items[MAX_ITEMS]{ 2, 5, 10 }; // Use uniform initialization to set initial number of items player has (C++11)
 //	int items[MAX_ITEMS] = { 2, 5, 10 }; // if not using C++11, use an initializer list instead

	std::cout << "The player has " << countTotalItems(items) << " items in total.\n";

	return 0;
}
