// condes-66.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
Destructors are invoked in the order opposite to the order in which constructors are called.

We have a hierarchy of classes here: A <- B <- C (arrows, as usually, point from derived classes to their base classes).
Additionally, class B has an object member of type K. In main we just create an object of type C, 
which is destroyed when main exits.

One can see that a suboject of class A is created first, and then a subobject of class B
*/
#include "pch.h"
#include <iostream>
using namespace std;

struct K {
	char k;
	K(char kk = 'k') {
		k = kk;
		cout << "Ctor K\n";
	}

	~K() {
		cout << "Dtor K\n";
	}
};

struct A {
	char a;
	A(char aa = 'a') {
		a = aa;
		cout << "Ctor A\n";
	}

	~A() {
		cout << "Dtor A\n";
	}
};

struct B : public A {
	char b;
	K    k;
	B(char bb = 'b') : A(bb) {
		b = bb;
		cout << "Ctor B\n";
	}

	~B() {
		cout << "Dtor B\n";
	}
};

struct C : public B {
	char c;
	C(char cc = 'c') : B(cc) {
		c = cc;
		cout << "Ctor C\n";
	}

	~C() {
		cout << "Dtor C\n";
	}
};

int main() {
	C c;
}