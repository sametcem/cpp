// Project72.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <new>
using namespace std;

int main() {
	int* iarr = new int[8];
	for (int i = 0; i < 8; i++) iarr[i] = i + 1;

	double* darr = new (iarr + 2) double[2]; //  at the address of the third element of this array, we allocate an array of two double s and initialize it with values and 1/3
	for (int i = 0; i < 2; i++) darr[i] = (1 + i) / 3.;

	cout << "\nArray darr:\n\n";
	for (int i = 0; i < 2; i++)
		cout << "  darr[" << i << "] = " << darr[i] << endl;

	cout << "\nArray iarr:\n" << endl;
	for (int i = 0; i < 8; i++)
		cout << "  iarr[" << i << "] = " << iarr[i] << endl;

	delete[] iarr;
}