// Project6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
	long double ld = 0;
	string      st = "Hermenegilda";
	short       sh = 0;
	long       *lo = nullptr;
	cout << "long double: " << sizeof ld << endl
		<< "double     : " << sizeof(double) << endl
		<< "float      : " << sizeof(float) << endl
		<< "long long  : " << sizeof(long long) << endl
		<< "long       : " << sizeof(long) << endl
		<< "int        : " << sizeof(int) << endl
		<< "short      : " << sizeof sh << endl
		<< "char       : " << sizeof(char) << endl
		<< "bool       : " << sizeof(bool) << endl
		<< "string     : " << sizeof st << endl
		<< "long*      : " << sizeof lo << endl;
}