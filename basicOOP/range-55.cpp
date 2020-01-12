// range-55.cpp : This file contains the 'main' function. Program execution begins and ends there.
// However, the „index” does not have to be an int:		 --->  Floating point „index” 

#include "pch.h"
#include <iostream>
using namespace std;

class Ranges {
	int cntr[3];
	double min, max;

public:
	Ranges(double min, double max)
		: min(min), max(max) {
		cntr[0] = cntr[1] = cntr[2] = 0;
	}

	int& operator[](double x) {
		int i;

		if (x > max) i = 2;
		else if (x >= min) i = 1;
		else                 i = 0;

		return cntr[i];
	}

	friend ostream& operator<<(ostream&, const Ranges&);
};

ostream& operator<<(ostream& str, const Ranges& r) {
	return str << "Range = [" << r.min << ", " << r.max
		<< "]:  " << "Below " << r.cntr[0]
		<< "; inside " << r.cntr[1] << "; above "
		<< r.cntr[2];
}

int main()
{
	Ranges range(3.0, 5.5);
	double x;
	cout << "Enter numbers; 0 terminates:" << endl;

	while ((cin >> x) && x) range[x]++;

	cout << range << endl;
	cout << "x = 4.7 -> cntr = " << range[4.7] << endl;
}

