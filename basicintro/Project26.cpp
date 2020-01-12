
//Compound Types
#include "pch.h"
#include <iostream>

int& fun(int *k, int &m) {
	return *k > m ? *k : m;
}

int main() {
	using std::cout; using std::endl;
	int tab[]{ 1,2,3 };

	int(&x)[3] = tab; // A REFERENCE TO A THREE ELEMENT ARRAY OF VARIABLES TYPE OF INT.
	cout << "x[2]    = " << x[2] << endl;
	cout << "x[1]    = " << x[1] << endl;
	cout << endl;

	int *y[3] = { tab,tab,tab }; // A THREE ELEMENT ARRAY OF POINTERS TO VARIABLE OF TYPE INT.
	cout << "y[2][0] = " << y[2][0] << endl; // {{1,2,3},{1,2,3},{1,2,3}}

	int *(&z)[3] = y; // A REFERENCE TO A THREE ELEMENT ARRAY OF POINTERS TO VARIABLES OF TYPE INT.
	cout << "z[2][0] = " << z[2][0] << endl; // { {1, 2, 3}, { 1,2,3 }, { 1,2,3 }}

	int &(*f)(int*, int&); // A POINTER TO A FUNCTION WITH TWO PARAMETERS OF TYPES INT* AND INT& WHICH RETURNS A REFERENCE TO VARIABLE OF TYPE INT.
	f = fun;
	int v1 = f(&tab[1], tab[2]);
	int v2 = (*f)(&tab[1], tab[2]);
	cout << "v1      = " << v1 << endl;
	cout << "v2      = " << v2 << endl;
}
