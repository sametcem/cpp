// Project52.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Functions can return references. The following declaration

int& fun(int);
declares a function which returns a reference to an int,
or, as we say, returns an int by reference. 
It means that an expression like fun(3) is 
another name of an int which appeared in the return statement terminating the execution of the function.

Functions cannot return references (or pointers) to their local variables:
such variables do not exist after the return. However, functions can return 
a local variable by value: after the return the variable does not exist,
but the copy of its value, after a conversion, if necessary, 
is passed to the caller through the stack, processor's register or in another way — 
this is an implementation detail of no interest to the user.

*/

#include "pch.h"
#include <iostream>
using namespace std;

double powers(double&, double*);
int* square(int*);
int& funmax(int[], int);

int main()
{
    // These are reference and pointer arguments
	double u = 4, v;
	double cube = powers(u, &v);
	cout << "Cube: " << cube << "; square: "
		 << u << "; sq. root: " << v << endl;

	// even this is OK
	int i = 4;
	cout << "20? : " << ++*square(&i) + 3 << endl; // ++ inc 1.

	// returning reference
	int tab[] = { 1,4,6,2 };
	cout << "Array before: ";
	for (i = 0; i < 4; i++) cout << tab[i] << " ";
	cout << endl;

	funmax(tab, 4) = 9; // The function looks for the maximum element of the array and returns this element by reference.

	cout << "Array after : ";
	for (i = 0; i < 4; i++) cout << tab[i] << " ";
	cout << endl;


}

double powers(double& u, double* v) {
	double x = u;
	u *= u;
	*v = sqrt(x);
	return u * x;
}

int* square(int* p) {
	*p *= *p;
	return p;
}

int& funmax(int* tab, int ile) {
	int i, ind = 0;
	for(i = 1; i < ile ; i++) {
		if (tab[i] > tab[ind]) ind = i;
	}
	return tab[ind];
}

