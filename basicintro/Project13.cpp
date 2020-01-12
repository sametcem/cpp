// Project13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int k = 7, *p = &k, &refk = *p, m = 9,t = 8;

	p = &m;
	k = 11;

	cout << "  *p = " << *p << endl;
	cout << "refk = " << refk << endl;

	p = &t;

	cout << "  *p = " << *p << endl;
	cout << "refk = " << refk << endl;

	return 0;

}
