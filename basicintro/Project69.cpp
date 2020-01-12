// Project69.cpp : This file contains the 'main' function. Program execution begins and ends there.
// DYNAMIC TWO DIMENSIONAL ARRAY

#include "pch.h"
#include <iostream>
using namespace std;

double** allocMatrix2D(size_t, size_t);
void deleteMatrix2D(double **&);

int main()
{
	size_t dim1 = 2, dim2 = 3; // These are not constants here recognize.
	//allocating
	double** matrix2d = allocMatrix2D(dim1, dim2);

	//filling out the matrix
	for (size_t i = 0; i < dim1; i++) {
		for (size_t j = 0; j < dim2; j++) {
			matrix2d[i][j] = 3 * i + j + 1.5;
		}
	}

	//print it
	for (size_t i = 0; i < dim1; i++) {
		for (size_t j = 0; j < dim2; j++) {
			cout << matrix2d[i][j] << " ";
		}
		cout << endl;
	}

	//deallocating
	deleteMatrix2D(matrix2d);
}

double** allocMatrix2D(size_t dim1, size_t dim2) {
	double** matrix2d = new double*[dim1];
	double* dumm = new double[dim1*dim2];

	for (size_t i = 0; i < dim1; i++) {
		matrix2d[i] = dumm + i * dim2;
	}
	return matrix2d;
}

void deleteMatrix2D(double**& matrix2d) {
	delete[] matrix2d[0];
	delete[] matrix2d;
	matrix2d = 0;
}


