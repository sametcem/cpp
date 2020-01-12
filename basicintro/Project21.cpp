// Project21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	const char **v;
	const char *t[] = { "abcd", "efghi", "jklmno" };
	v = t;
	cout << "v+2         = " << v + 2 << endl;
	cout << "v[2]        = " << v[2] << endl;
	cout << "*(v+2)      = " << *(v + 2) << endl;

	cout << "*(*(t+1)+2) = " << *(*(t + 1) + 2) << endl;
	cout << "t[1][2]     = " << t[1][2] << endl;

	cout << "*(*(v+1)+2) = " << *(*(v + 1) + 2) << endl;
	cout << "v[1][2]     = " << v[1][2] << endl;

	//we get *(*(t+1)+2) which is equivalent to t[1][2]
}