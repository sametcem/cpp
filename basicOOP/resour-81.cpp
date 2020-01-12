// resour-81.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Exceptions can also be thrown in constructors and destructors. These are cases particularly hard to handle.

#include "pch.h"
#include <iostream>
#include <cstring>
#include <cstdio>  // FILE, fopen, fclose
using namespace std;

class A {
	struct nam {
		char* n;
		nam(const char* n)
			: n(strcpy(new char[strlen(n) + 1], n))
		{ }
		~nam() {
			cerr << "dtor nam: " << n << endl;
			delete[] n;
		}
	};

	nam Name;
	FILE*    file;
public:
	A(const char* n, const char* p)
		: Name(n)
	{
		file = fopen(p, "r");
		// ...
//      throw 1;
		// ...
	}

	// other fields and methods

	~A() {
		cerr << "dtor A" << endl;
		if (file) fclose(file);
	}
};

int main() {
	try {
		A a("Carrington", "afile.cpp");
	}
	catch (...) {
		cerr << "object instantiation failed\n";
	}
}