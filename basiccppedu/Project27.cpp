// Project27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

//A C-style string is simply an array of characters that uses a null terminator. 
//A null terminator is a special character (‘\0’, ascii code 0) used to indicate the end of the string. 
//More generically, A C-style string is called a null-terminated string.

int main()
{
	char myString[] = "astring";
	const int length = std::size(myString);
	//  const int length = sizeof(myString) / sizeof(myString[0]); // use instead if not C++17 capable
	std::cout << myString << " has " << length << " characters.\n";
	for (int index = 0; index < length; ++index)
		std::cout << static_cast<int>(myString[index]) << " "<< std::endl;


	char myStringa[] = "string";
	myStringa[1] = 'p';
	std::cout << myStringa<< std::endl;
}
