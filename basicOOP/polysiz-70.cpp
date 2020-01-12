// polysiz-70.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class A {
	int i;
public:
	A() : i(0)
	{ }
};

class B {
	int i;
public:
	B() : i(0)
	{ }
	~B()
	{ }
};

class C {
	int i;
public:
	C() : i(0)
	{ }
	virtual ~C()
	{ }
};

int main() {
	cout << "sizeof(A): " << sizeof(A) << endl;
	cout << "sizeof(B): " << sizeof(B) << endl;
	cout << "sizeof(C): " << sizeof(C) << endl;
}

/*

Class  B differs from  A only in that id defines a destructor (unnecessary in this class). 
The destructor is not virtual, so the class is not polymorphic. 
Class  C is like  B, but its destructor is virtual, so the class  C becomes polymorphic.


As one can see, adding a method (destructor in this case) did not make the objects larger; 
adding polymorphism, however, leads to larger objects (by four bytes).
For this simple class it means that objects are by 100% larger! 
Many classes contain mainly pointer-type fields, so adding even 4 bytes to every object can lead to quite substantial overhead.

*/