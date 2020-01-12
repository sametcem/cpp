// Project61.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Function Templates

#include "pch.h"
#include <iostream>
#include <typeinfo>
using namespace std;

template <class T1, typename T2>
int howmany(T1* arr, T2 mn, T2 mx, int size) {
	int count = 0;
	for (int i = 0; i < size; ++i)
		if (arr[i] > mn && arr[i] < mx) ++count;

	// test
	cout << "T1=" << typeid(T1).name() << " "
		<< "T2=" << typeid(T2).name() << " ";

	return count;
}

int main() {
	double mnd = 0, mxd = 10;
	int    mni = 0, mxi = 10;
	double tabd[] = { -2, -1, 2, 5, 7, 11 };
	int    tabi[] = { -2, -1, 2, 5, 7, 11 };

	int ii = howmany(tabi, mni, mxi, 6);
	cout << "res=" << ii << endl;

	int id = howmany(tabi, mnd, mxd, 6);
	cout << "res=" << id << endl;

	int di = howmany(tabd, mni, mxi, 6);
	cout << "res=" << di << endl;

	int dd = howmany(tabd, mnd, mxd, 6);
	cout << "res=" << dd << endl << endl;

	int xx = howmany<double, double>(tabd, mni, mxi, 6);
	cout << "res=" << xx << endl;
}