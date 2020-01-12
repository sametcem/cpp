// Project45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int      k = -2;
	unsigned uns = 1;

	int      x = k + uns;
	unsigned y = k + uns;

	cout << "x   = " << x << endl;
	cout << "y   = " << y << endl;
	cout << "y+1 = " << y + 1 << endl;


	signed   char c = 255;
	unsigned char d = 255;

	cout << "c+1 = " << c + 1 << endl;
	cout << "d+1 = " << d + 1 << endl;
	d = d + 1;
	cout << "d   = " << (int)d << endl;
}
