// Project10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	double x, y, *pmin, *pmax;
	cout << "Enter two numbers: ";
	cin >> x >> y;
	if (x < y) {
		pmin = &x; pmax = &y;
	}
	else {
		pmin = &y; pmax = &x;
	}
	cout << "Min = " << *pmin << endl;
	cout << "Max = " << *pmax << endl;
}