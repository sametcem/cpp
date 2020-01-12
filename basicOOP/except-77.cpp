// except-77.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <sstream> // ostringstream	
#include <cmath>  // sqrt, log, atan
using namespace std;

struct Error {
	virtual string info() = 0;
};

class Negative : public Error {
	double x;
public:
	Negative(double x) : x(x) { }
	string info() {
		ostringstream strum;
		strum << "Negative argument: x = " << x;
		return strum.str();
	}
};

class OutOfRange : public Error {
	double x, min, max;
public:
	OutOfRange(double x, double mi, double ma)
		: x(x), min(mi), max(ma)
	{ }
	string info() {
		ostringstream strum;
		strum << "Argument x = " << x << "\n    "
			<< "    out of range [" << min << ","
			<< max << "]";
		return strum.str();
	}
};

double fun(double x) {
	if (x < 0 || x > 2) throw OutOfRange(x, 0, 3);
	return sqrt(x*(3 - x));
}

double logPI(double x) {
	static double LPI = log(4 * atan(1.));
	if (x <= 0) throw Negative(x);
	return log(x) / LPI;
}

int main()
{
	double x = 4 * atan(1.);

	cout << "x = " << x << endl;
	try {
		double z1 = logPI(x);
		cout << "  z1 = " << z1 << endl;
		double z2 = fun(x);
		cout << "  z2 = " << z2 << endl;
	}
	catch (Error& blad) {
		cerr << "  Error: " << blad.info() << endl;
	}
}

