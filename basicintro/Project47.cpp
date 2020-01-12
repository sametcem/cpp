// Project47.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int d2i(double);
double i2d(int);

int main()
{
	double x = 3.5;
	cout << "d2i(x) = " << d2i(x) << endl
		<< "i2d(x) = " << i2d(x) << endl;
}

int d2i(double x) { return 3 * x; }
double i2d(int k) { return 3 * k; }

/*
Neither d2i nor i2d gave the correct result! Why?
The parameter of d2i is of type double. Therefore, the value of x, which is also of type double, has been passed as double. Inside the function this value has been multiplied by 3; the result is 10.5. However, the function d2i is of type int (i.e., it has to return an int). The result is therefore converted to this type, giving exactly 10.

The function i2d has one parameter of type int. Therefore, the value of the argument x, which is 3.5, will be converted to this type before passing it to the function: the function will get the integer value 3. This will be multiplied by 3 giving 9. The return type of the function is double, so the value 9 will be converted to double — the type of the result will be double, but its value will remain 9 (i.e., 9.00000).
*/
