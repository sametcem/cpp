// Project63.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstring>    // memcpy
using namespace std;

template<typename T>
void printarr(ostream&, const T[], int);

template<typename T>
void inssort(T[], int);

template<typename T>
double minmaxmed(const T[], int, T&, T&);

template<typename T>
void test(T[], int);


int main() {
	cout << "\n===array int===" << endl;
	int arri[] = { 9,7,2,6,6,2,7,9,2,9,5,2 };
	test(arri, sizeof(arri) / sizeof(int));

	cout << "\n===array double===" << endl;
	double arrd[] = { 9.5,2.5,6,7.5,9,2,5,2.5 };
	test(arrd, sizeof(arrd) / sizeof(double));

	cout << "\n===array unsigned===" << endl;
	unsigned arru[] = { 23,32,12,76,21,45,20,67 };
	test(arru, sizeof(arru) / sizeof(unsigned));
}


template<typename T>
void test(T arr[], int size) {
	T min, max;

	double median = minmaxmed(arr, size, min, max);

	cout << "min = " << min << ", max = " << max
		<< ", median = " << median << endl;

	cout << "Original array: ";
	printarr(cout, arr, size);

	inssort(arr, size);

	cout << "Sorted   array: ";
	printarr(cout, arr, size);
}

template<typename T>
void printarr(ostream& str, const T t[], int size) {
	str << "[ ";
	for (int i = 0; i < size; ++i) str << t[i] << " ";
	str << "]" << endl;
}

template<typename T>
void inssort(T a[], int size) {
	int i, indmin = 0;            // sentinel
	for (i = 1; i < size; ++i)
		if (a[i] < a[indmin]) indmin = i;
	if (indmin != 0) {
		T p = a[0];
		a[0] = a[indmin];
		a[indmin] = p;
	}

	for (i = 2; i < size; ++i) {  // sorting
		int j = i;
		T v = a[i];
		while (v < a[j - 1]) {
			a[j] = a[j - 1];
			j--;
		}
		if (i != j) a[j] = v;
	}
}

template<typename T>
double minmaxmed(const T t[], int size, T& min, T& max) {
	T* arr = new T[size];
	memcpy(arr, t, size * sizeof(T));

	inssort(arr, size);

	min = arr[0];
	max = arr[size - 1];
	double median = size % 2 == 0 ?
		0.5*(arr[size / 2] + arr[size / 2 - 1])
		: arr[size / 2];

	delete[] arr;
	return median;
}
