// term-76.cpp : This file contains the 'main' function. Program execution begins and ends there.
// EXCEPTIONS

/*
situations when an an error occures at run time and the program cannot continue 
(this can be calling a method for a  NULL pointer, trying to read from a nonexisting file etc.)
 Exception handling allows the programmer to prepare the program for such situations: the program can try to „repair” something and resume its work, 
 or stop execution, but in a „civilized” way.

 An exception can be thrown (or raised) in every place of the program.

*/
#include "pch.h"
#include <iostream>
#include <cmath>      // sqrt
#include <cstdlib>    // exit
#include <exception>
using namespace std;

void termin() {
	cout << "termin: exit(7)" << endl;
	exit(7);
}

//Function Sqrt throws an exception when the value of argument passed to it is negative
double Sqrt(double x) {
	if (x < 0) throw "x < 0";
	return sqrt(x);
}

int main() {
	set_terminate(&termin);

	double z, x;

	x = 16;
	z = Sqrt(x);
	cout << "Sqrt(" << x << ")=" << z << endl;

	x = -16;
	z = Sqrt(x);
	cout << "Sqrt(" << x << ")=" << z << endl;
}