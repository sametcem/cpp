// Project22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

/*
We create character arrays nap1 and nap2 with sizes sufficient to store expected strings (by the way, it is a simple but generally not recommended way of reading strings).
*/
int main()
{
	char nap1[100], nap2[100];
	cout << "\nEnter two strings separated by spaces: ";
	cin >> nap1 >> nap2;
	cout << "\nString 1: " << nap1 << endl;
	cout << "String 2: " << nap2 << endl;
}

