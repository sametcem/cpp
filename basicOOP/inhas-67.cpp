// inhas-67.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Inheriting Assignment Operator

#include "pch.h"
#include <iostream>
using namespace std;

struct A {
	char a;
	A(char aa = 'A') {
		a = aa;
	}

	A& operator=(const A& aa) {
		a = aa.a;
		cout << "A::operator=()\n";
		return *this;
	}
};

struct B : public A {
	char b;
	B(char bb = 'b') : A(bb) {
		b = bb;
	}
};


int main()
{
	B b1(1), b2(2);
	b1 = b2;
}
