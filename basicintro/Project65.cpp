// Project65.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	const int DIM = 3;
	cout << "Enter the first dimension";
	
	int size;
	cin >> size;
	int(*t)[DIM] = new int[size][DIM];

	for (int i = 0; i < size; ++i)
		for (int j = 0; j < DIM; ++j)
			t[i][j] = 10 * i + j;

	int* p = reinterpret_cast<int*>(t);

	for (int i = 0; i < DIM*size; ++i)
		cout << p[i] << " ";

	cout << endl;

	cout << "t[0]        : " << t[0] << endl;
	cout << "t[1]        : " << t[1] << endl;
	cout << "sizeof(t[0]): " << sizeof(t[0]) << endl;
}

	