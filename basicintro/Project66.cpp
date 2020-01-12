// Project66.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <new>
#include <iomanip>
using namespace std;

int main() {
	const size_t mega = 1024 * 1024, step = 200 * mega;

	for (size_t size = step; ; size += step) {
		try {
			char* buf = new char[size];
			delete[] buf;
		}
		catch (bad_alloc) {
			cout << "FAILED: " << setw(4)
				<< size / mega << " MB" << endl;
			return 1;
		}
		cout << "    OK: " << setw(4)
			<< size / mega << " MB" << endl;
	}
}