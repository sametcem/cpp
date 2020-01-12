// hier1-80.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

struct A {
	const char* info() { return "A*"; }
};

struct B : A {
	const char* info() { return "B*"; }
};

int main()
{
	try {
		throw new B;
	}
	catch (A* a) { cout << a->info() << endl; }
	catch (B* b) { cout << b->info() << endl; }
}