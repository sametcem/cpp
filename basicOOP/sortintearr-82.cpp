// sortintearr-82.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "sortinte.h"   // including header
						// with declarations
using namespace std;

// implementation of function sort
void sort(int a[], int size) {
	int i, indmin = 0;
	for (i = 1; i < size; ++i)
		if (a[i] < a[indmin]) indmin = i;
	if (indmin != 0) {
		int p = a[0];
		a[0] = a[indmin];
		a[indmin] = p;
	}

	for (i = 2; i < size; ++i) {
		int j = i, v = a[i];
		while (v < a[j - 1]) {
			a[j] = a[j - 1];
			j--;
		}
		if (i != j) a[j] = v;
	}
}

// implementation of function writarr
void writarr(const int t[], int size) {
	cout << "[ ";
	for (int i = 0; i < size; ++i)
		cout << t[i] << " ";
	cout << "]" << endl;
}

int main() {
	int arr[] = { 9,7,2,6,4,5,6,2,7,9,2,9,5,2 },
		size = sizeof(arr) / sizeof(arr[0]);

	cout << "Original array: ";
	writarr(arr, size);

	sort(arr, size);

	cout << "  Sorted array: ";
	writarr(arr, size);
}