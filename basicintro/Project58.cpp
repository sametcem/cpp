// Project58.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

typedef double(*ARRFUN[])(double); // the name ARRFUN is the name of type array of pointers which point to functions of type double - double 
// typedef const char *ARRNAM[];
using ARRNAM = const char*[];  // C++11

void funprnt(ARRFUN, ARRNAM, double);

int main() {
	const double PIover4 = atan(1.);

	ARRFUN arrfun = { sin,  cos,  tan }; // doubles
	ARRNAM arrnam = { "sin","cos","tan" }; // chars

	cout << "sizeof(ARRFUN) = " << sizeof(arrfun) << endl
		<< "sizeof(ARRNAM) = " << sizeof(arrnam) << "\n\n";

	for (int i = 0; i < 3; i++) {
		cout << "arrfun[" << i << "](pi/4) = "
			<< arrfun[i](PIover4) << " ("
			<< arrnam[i] << ")\n";
	}

	funprnt(arrfun, arrnam, PIover4);
}

void funprnt(ARRFUN f, ARRNAM t, double x) {
	cout << "\n";
	for (int i = 0; i < 3; i++) {
		cout << "funprnt: " << t[i] << " "
			<< "value    " << f[i](x) << endl;
	}
}