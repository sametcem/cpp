
#include "pch.h"
#include <iostream>

/*
scope resolution operator which is denoted by a double colon, i.e., by two consecutive colons ' ::'. If a global variable k has been shadowed in a block by another variable with the same name, then it still can be accessed by its qualified name ::k.*/
int k;

int main() {
	using std::cout; using std::endl;

	cout << "  k: " << k << endl;
	cout << "::k: " << ::k << endl;

	int k = 10;

	cout << "  k: " << k << endl;
	cout << "::k: " << ::k << endl;

	::k = 1;

	cout << "  k: " << k << endl;
	cout << "::k: " << ::k << endl;

	{
		int k = 77;
		cout << "Inside block:" << endl;
		cout << "  k: " << k << endl;
		cout << "::k: " << ::k << endl;
	}

	cout << "After  block:" << endl;
	cout << "  k: " << k << endl;
	cout << "::k: " << ::k << endl;
}

