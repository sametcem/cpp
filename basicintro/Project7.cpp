// Project7.cpp : This file contains the 'main' function. Program execution begins and ends there.



//The keyword auto means here, that the compiler is supposed to guess the type of the declared variable based on the value used to initialize it (of course this type will be strictly defined and cannot be changed).
//The keyword decltype means, that variable variable is to have the same type as is the type of the expression inside parentheses.

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	auto k = 7;             // k has type int
	auto x = 1.;            // x has type double
	decltype(x) y = 7;      // y has type double, although
							// '7' is a literal of type int
	decltype(k*x) z = 7;    // product k*x has type double
	cout << "k/2=" << k / 2 << ", y/2=" << y / 2
		<< ", z/2=" << z / 2 << endl;
}
