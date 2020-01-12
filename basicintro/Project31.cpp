// Project31.cpp : This file contains the 'main' function. Program execution begins and ends there.
// External variables (extern) can be declared only in global (file) scope.
// A line like with extern and without will be equivalent to each other.
// Declaring a variable as volatile means that its value can be modified in such a way that the program „does not know” about it.

//CONST
//The value of constants cannot be changed after their creation.
//Some constant can be evaluated at compýlation time 
//const int c = fun(a,b);

/*
const int i = 25;
int *pi = &i; // WRONG!!!
*/
#include "pch.h"
#include <iostream>
using namespace std;

int fun(const int *pi) {
	//*pi = 2 * (*pi); // WRONG !!!
	return *pi;
}

int main()
{
	int i = 2;
	int res = fun(&i);
	cout << "res = " << res << endl;

	int k = 3;
	const int *ki = &k;

	k = k * 3;
	cout << " k = " << k << endl;
	cout << " *ki = " << *ki << endl;
	
	return 0;
}

