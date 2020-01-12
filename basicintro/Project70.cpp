// Project70.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int**   allocMatrix2D(int, int);
void    deleteMatrix2D(int**&);

int***  allocMatrix3D(int, int, int);
void    deleteMatrix3D(int***&);

int**** allocMatrix4D(int, int, int, int);
void    deleteMatrix4D(int****&);

int main() {
	int dim1 = 7, dim2 = 9, dim3 = 12, dim4 = 5;

	// 2-dimensional matrices ///////////////////////

	// allocating
	int** matrix2d = allocMatrix2D(dim1, dim2);

	// test
	for (int i = 0; i < dim1; i++)
		for (int j = 0; j < dim2; j++)
			matrix2d[i][j] = i + j + 2;

	cout << "2-dimensional matrix" << endl
		<< " Middle element: "
		<< matrix2d[dim1 / 2][dim2 / 2]
		<< endl << "     should be : "
		<< dim1 / 2 + dim2 / 2 + 2 << endl;
	cout << " Last element  : "
		<< matrix2d[dim1 - 1][dim2 - 1]
		<< endl << "     should be : "
		<< dim1 + dim2 << endl << endl;

	// deleting
	deleteMatrix2D(matrix2d);

	// 3-dimensional matrices ///////////////////////

	// allocating
	int*** matrix3d = allocMatrix3D(dim1, dim2, dim3);

	// test
	for (int i = 0; i < dim1; i++)
		for (int j = 0; j < dim2; j++)
			for (int k = 0; k < dim3; k++)
				matrix3d[i][j][k] = i + j + k + 3;

	cout << "3-dimensional matrix" << endl
		<< " Middle element: "
		<< matrix3d[dim1 / 2][dim2 / 2][dim3 / 2]
		<< endl << "     should be : "
		<< dim1 / 2 + dim2 / 2 + dim3 / 2 + 3 << endl;
	cout << " Last element  : "
		<< matrix3d[dim1 - 1][dim2 - 1][dim3 - 1]
		<< endl << "     should be : "
		<< dim1 + dim2 + dim3 << endl << endl;

	// deleting
	deleteMatrix3D(matrix3d);

	// 4-dimensional matrices ///////////////////////

	// allocating
	int**** matrix4d = allocMatrix4D(dim1, dim2, dim3, dim4);

	// test
	for (int i = 0; i < dim1; i++)
		for (int j = 0; j < dim2; j++)
			for (int k = 0; k < dim3; k++)
				for (int m = 0; m < dim4; m++)
					matrix4d[i][j][k][m] = i + j + k + m + 4;

	cout << "4-dimensional matrix" << endl
		<< " Middle element: "
		<< matrix4d[dim1 / 2][dim2 / 2][dim3 / 2][dim4 / 2]
		<< endl << "     should be : "
		<< dim1 / 2 + dim2 / 2 + dim3 / 2 + dim4 / 2 + 4 << endl;
	cout << " Last element  : "
		<< matrix4d[dim1 - 1][dim2 - 1][dim3 - 1][dim4 - 1]
		<< endl << "     should be : "
		<< dim1 + dim2 + dim3 + dim4 << endl << endl;

	// deleting
	deleteMatrix4D(matrix4d);
}

int** allocMatrix2D(int dim1, int dim2) {
	int** matrix2d = new int*[dim1];
	int*  dumm = new int[dim1*dim2];
	for (int i = 0; i < dim1; i++)
		matrix2d[i] = dumm + i * dim2;
	return matrix2d;
}

void deleteMatrix2D(int**& matrix2d) {
	delete[] matrix2d[0];
	delete[] matrix2d;
	matrix2d = 0;
}

int*** allocMatrix3D(int dim1, int dim2, int dim3) {
	int*** matrix3d = new int**[dim1];
	int**  dumm = new int*[dim1*dim2];
	int*   d = new int[dim1*dim2*dim3];
	for (int i = 0; i < dim1; i++) {
		matrix3d[i] = dumm + i * dim2;
		for (int j = 0; j < dim2; j++)
			dumm[i*dim2 + j] = d + (i*dim2 + j)*dim3;
	}
	return matrix3d;
}

void deleteMatrix3D(int***& matrix3d) {
	delete[] matrix3d[0][0];
	delete[] matrix3d[0];
	delete[] matrix3d;
	matrix3d = 0;
}

int**** allocMatrix4D(int dim1, int dim2, int dim3, int dim4) {
	int**** matrix4d = new int***[dim1];
	int***  dumm = new int**[dim1*dim2];
	int**   dum = new int*[dim1*dim2*dim3];
	int*    d = new int[dim1*dim2*dim3*dim4];
	for (int i = 0; i < dim1; i++) {
		matrix4d[i] = dumm + i * dim2;
		for (int j = 0; j < dim2; j++) {
			dumm[i*dim2 + j] = dum + (i*dim2 + j)*dim3;
			for (int k = 0; k < dim3; k++)
				dum[(i*dim2 + j)*dim3 + k] =
				d + ((i*dim2 + j)*dim3 + k)*dim4;
		}
	}
	return matrix4d;
}

void deleteMatrix4D(int****& matrix4d) {
	delete[] matrix4d[0][0][0];
	delete[] matrix4d[0][0];
	delete[] matrix4d[0];
	delete[] matrix4d;
	matrix4d = 0;
}