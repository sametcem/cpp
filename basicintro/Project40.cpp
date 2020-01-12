// Project40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
using namespace std;


void reverse(int *arr, int size) {
	if (size < 2) return;

	for (int i = 0, k = size - 1, aux; i < k; i++, k--) {
		aux = arr[i];
		arr[i] = arr[k];
		arr[k] = aux;
	}
}

void printArr(int *arr, int size) {
	cout << "[ ";
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << "]" << endl;
}



int main() {

	int arr[] = { 1, 3, 5, 7, 2, 4, -9, 12 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printArr(arr, size);
	reverse(arr, size);
	printArr(arr, size);

	cout << "****"<< endl;

	int x, y, roll = 0;
	do {
		x = (int)(rand() / (RAND_MAX + 1.) * 6) + 1;
		y = (int)(rand() / (RAND_MAX + 1.) * 6) + 1;
		cout << "Roll no " << ++roll << ": ("
			<< x << ", " << y << ")" << endl;
	} while (x + y != 12);

	cout << "***" << endl;

	//FOR EACH LOOP

	int brr[] = { 1,2,3,4,9,8,7,6 };

	for (int e : brr) cout << e << " ";
	cout << endl;
	for (int& e : brr) e -= 1;
	for (auto e : brr) cout << e << " ";
	cout << endl;


}