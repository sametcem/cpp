// Project67.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void   printarr(ostream&, const int[], size_t);
void   inssort(int[], size_t);
double minmaxmed(const int[], size_t, int&, int&);

int main() {
	int arr[] = { 7,2,6,4,7,5 }, min, max;
	size_t size = sizeof(arr) / sizeof(arr[0]);

	double median = minmaxmed(arr, size, min, max);

	cout << "min = " << min << ", max = " << max
		<< ", median = " << median << endl;

	cout << "Original array: ";
	printarr(cout, arr, size);

	inssort(arr, size);

	cout << "Sorted   array: ";
	printarr(cout, arr, size);
}

void printarr(ostream& str, const int t[], size_t size) {
	str << "[ ";
	for (size_t i = 0; i < size; ++i) str << t[i] << " ";
	str << "]" << endl;
}

void inssort(int a[], size_t siz) {
	size_t indmin = 0;
	for (size_t i = 1; i < siz; ++i)
		if (a[i] < a[indmin]) indmin = i;
	if (indmin != 0) {
		int p = a[0];
		a[0] = a[indmin];
		a[indmin] = p;
	}
	for (size_t i = 2; i < siz; ++i) {
		size_t j = i;
		int v = a[i];
		while (v < a[j - 1]) { a[j] = a[j - 1]; j--; }
		if (i != j) a[j] = v;
	}
}

double minmaxmed(const int t[], size_t size,
	int& min, int& max) {
	int* arr = new int[size];

	// would be better to use memcpy...
	for (size_t i = 0; i < size; ++i) arr[i] = t[i];

	inssort(arr, size);

	min = arr[0];
	max = arr[size - 1];

	double median = size % 2 == 0 ?
		0.5*(arr[size / 2] + arr[size / 2 - 1])
		: arr[size / 2];
	delete[] arr;
	return median;
}