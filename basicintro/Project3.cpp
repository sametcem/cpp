// Project3.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
Preprocesor -> This is a special program which processes the text of C/C++ program before its compilation proper.
Preprocessor is a program that reads our source file with text of a program looking for directives which are intended for it.
preprocessor directives are not C/C++ statements and therefore do not end with a semicolon.
*/

#include "pch.h"
#include <iostream>
#define dim 256

#ifdef __cplusplus
#include <iostream>
using namespace std;
#else
#include <stdio.h>
#endif


int main()
{

#ifdef __cplusplus
	cout << "Hello, C++" << endl;
#else
	printf("Hello, C\n");
#endif

	/*
		int k = dim;
	int dimen = 2 * dim;

	// are equivalent to

	int k = 256;
	int dimen = 2 * 256;
	*/

}

