
// Project12.cpp : This file contains the 'main' function. Program execution begins and ends there.

//References are often called aliases of variables.
//references are just other names of existing variables.

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int k = 5;
	int &refk = k;

	cout << "refk = " << refk << endl;
	cout << "   k = " << k << endl;

	k = 7;

	cout << "refk = " << refk << endl;
	cout << "   k = " << k << endl;

	refk = 9;

	cout << "refk = " << refk << endl;
	cout << "   k = " << k << endl;
}

