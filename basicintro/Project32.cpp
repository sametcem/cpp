// Project32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//Both variables, i and j are declared constant. The pointer p is a pointer to constant. But itself, it is not a constant
int main()
{
	const int i = 2, j = 3;
	const int *p = &i;
	cout << " *p " << *p << endl;

	p = &j;
	cout << " *p " << *p << endl;

}
