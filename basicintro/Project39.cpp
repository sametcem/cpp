// Project39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int hexVal(char c) {
	switch (c) {
	case '0': case '1': case '2':
	case '3': case '4': case '5':
	case '6': case '7': case '8':
	case '9':
		return c - '0';

	case 'a': case 'b': case 'c':
	case 'd': case 'e':
	case 'f':
		return 10 + c - 'a';

	case 'A': case 'B': case 'C':
	case 'D': case 'E':
	case 'F':
		return 10 + c - 'A';

	default: return -1;
	}
}

int main() {
	cout << "A = " << hexVal('A') << endl
		<< "f = " << hexVal('f') << endl
		<< "9 = " << hexVal('9') << endl
		<< "b = " << hexVal('b') << endl
		<< "Z = " << hexVal('Z') << endl;
}