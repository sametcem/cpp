// Project42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "string"

// ***
int main()
{
	const std::string names[] = { "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };
	std::string username;
	
	while (username != "exit") {
	std::cout << "Enter a name: ";
	std::cin >> username;
	
	if (username == "exit") {
		std::cout << "Exitting....";
		break;
	}

	bool found(false);
	for (const auto &name : names) {
		if (name == username) {
			found = true;
			break;
		}
	}

	if (found && username !="exit")
		std::cout << username << " was found.\n";
	else
		std::cout << username << " was not found.\n";

	}
}

