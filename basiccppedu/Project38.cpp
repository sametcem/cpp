// Project38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void changeN(int &ref)
{
	ref = 6;
}

int main()
{
	int n = 5;

	std::cout << n << '\n';

	changeN(n); // note that this argument does not need to be a reference

	std::cout << n << '\n';

	int val = 5;
	int &x = val;
	int* p = &x;

	//cout << *p;

	//References must be initialized when created:

	int t = 5; // normal integer
	int &y = t; // y is a reference to x
	int &z = y; // z is also a reference to x

	cout << y;
}
