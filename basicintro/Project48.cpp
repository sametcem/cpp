// Project48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

double PI = 3;

double disc(double, double = PI);

int main() {
	double r = 1;

	cout << "1. PI = " << PI << " Area = "
		<< disc(r) << endl;
	double PI = 3.14;
	cout << "2. PI = " << PI << " Area = "
		<< disc(r) << endl;
	::PI = 3.14;
	cout << "3. PI = " << PI << " Area = "
		<< disc(r) << endl;
}

double disc(double r, double pi) {
	return pi * r*r;
}