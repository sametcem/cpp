// wmanip-33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//User Defined Manipulators

#include "pch.h"
#include <iostream>
using namespace std;

ostream& scient(ostream&);
ostream& normal(ostream&);
ostream& acomma(ostream&);

int main() {
	double x = 123.456;
	cout << scient << x << acomma
		<< normal << x << endl;
}

ostream& scient(ostream& str) {
	str.setf(ios::showpos | ios::showpoint);
	str.setf(ios::scientific, ios::floatfield);
	str.precision(12);
	return str;
}

ostream& normal(ostream& str) {
	str.flags((ios::fmtflags)0);
	return str;
}

ostream& acomma(ostream& str) {
	return str << ", ";
}