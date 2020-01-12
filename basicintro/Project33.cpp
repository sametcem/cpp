
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int *p, k = 5, m = 7;

	const int cnts = 3;        // constant
	const int *q = &k;         // q - pointer to constant
	int *const r = &k;         // r - constant pointer
	const int arr[] = { 1,2,3 }; // array of constants

	p = &cnts; // ILLEGAL
	cnts = 1; // ILLEGAL
	*q = m; // ILLEGAL
	q = &m; // LEGAL (JUST CHANGING ITS VALUE)
	r = &m; // ILLEGAL
	k = 10; // LEGAL
	arr[1] = 9; // ILLEGAL
}

