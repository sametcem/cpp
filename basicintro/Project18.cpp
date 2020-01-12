// Project18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;



int main()
{
	// higher byte: 'a'; lower byte: 'b'
	short sh = 'b' + 256 * 'a';

	void *v = static_cast<void*>(&sh);
	char *c = static_cast<char*>(v);
	cout << "Order in memory: first "
		<< c[0] << " then " << c[1] << endl;
}


