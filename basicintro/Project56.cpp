// Project56.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

const double PI = 4 * atan(1.);

double ours(double);
double fun(double(*)(double), double, double);

int main()
{
	
	double(*f)(double);  // we define a function pointer  f, which can to point to functions taking one double and returning double.

	f = sin;
	cout << "sin(PI/2) =  " << (*f)(PI / 2) << endl; // this will be the address of the function sin (as we already know, we can leave out the '&' operator if we wish so).

	f = &cos;
	cout << "  cos(PI) = " << f(PI) << endl; // the value of the pointer is modified — now it points to function cos.

	f = ours;

	cout << "  ours(3) =  " << f(3) << endl; // now it will point to our own function ours which is of the correct type (double - double).

	double result = fun(sin, 0, PI / 6);

	cout << result << endl;
}

double ours(double x) {
	return x * x;
}

double fun(double(*f)(double), double a, double b) {
	return f(a) + f(b);
}

