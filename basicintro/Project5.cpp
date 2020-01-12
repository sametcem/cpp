// Project5.cpp : This file contains the 'main' function. Program execution begins and ends there.


/*
We mentioned the symbol __cplusplus that is always defined by C++ preprocessors (while standard C compiler defines __STDC__).
However, there are other macros which should be defined by any C/C++ preprocessor.
*/

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "File:     " << __FILE__ << endl
		<< "Date:     " << __DATE__ << endl
		<< "Line:     " << __LINE__ << endl
		<< "Time:     " << __TIME__ << endl
		<< "Function: " << __FUNCTION__ << endl;
}


