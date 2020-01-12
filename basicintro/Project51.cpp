// Project51.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void funarr(double[]);
void arrref(double(&)[6]);

int main()
{
	double arr[] = { 1,2,3,4,5,6 };
	cout << "sizeof double : " << sizeof(double) << endl;
	cout << "sizeof double*: " << sizeof(double*) << endl;
	cout << "sizeof arr in main: " << sizeof(arr) << endl;
	funarr(arr);
	arrref(arr);
}

void funarr(double t[]) {
	cout << "sizeof t w funarr : " << sizeof(t) << endl;
}

void arrref(double(&t)[6]) {
	cout << "sizeof t w arrref : " << sizeof(t) << endl;
}

