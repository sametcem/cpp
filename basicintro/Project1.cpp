// Project1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

double linear(double a, double b, double x) {
	return a *x + b;
}

int main()
{
	double  c = 2, z = 3;
	double result = linear(c, 5, 2);
	cout << "The result = " << result << endl;
}

