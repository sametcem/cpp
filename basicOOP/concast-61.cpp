// concast-61.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


void changeFirst(char* str, char c) {
	str[0] = c;
}

int main()
{
	const char name[] = "Jenny";
	cout << name << endl;

	// name[0]='K'; Forbidden.

	changeFirst(const_cast<char*>(name), 'K');

	// changeFirst(name,'K');

	cout << name << endl;
}

/*
Use of const_cast usually means that there is a flaw in the design of our program. 
Such casts should therefore be used only in exceptional circumstances.
*/