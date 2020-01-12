// copyconstructors-24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//COPY CONSTRUCTORS

/*
The copy-constructor creates a new object using as a template another, already existing, object of the same class. 
The object being created should be in a sense identical to the template object, and a copy-constructor just defines 
in what sense they are „identical”. The two objects —  the one created with a copy-constructor 
and the one used as a template — should be independent of each other, i.e., 
a modification of one of them should not affect the other.
-
Copy-constructors are always created — by the programmer or by the compiler automatically.
-
Note that copying of objects must always be performed when an object is passed to a function
by value — a copy must be made and put on the stack. Similarly, a copy will have to be 
constructed when an object is returned from a function by value (and not by reference or pointer). 
In all these cases, the copy-constructor will be invoked.

It is very important that the argument must be passed by reference and not by value.
*/

#include "pch.h"
#include <iostream>
using namespace std;

class A {
	double x;
public:
	A(double x = 1) {
		this->x = x;
		cout << "In default constructor" << endl;
	}

	A(const A& a) {
		x = a.x;
		cout << "In copy-constructor" << endl;
	}
};

A fun(A a) {
	cout << "In function fun" << endl;
	return a;
}

int main()
{
	cout << "**1**" << endl;
	A a;

	cout << "**2**" << endl;
	A b = a; // an object b which is to be a copy of already existing object  a.

	cout << "**3**" << endl;
	A c(b); // c invoking the copy-constructor and passing b as the argument.

	cout << "**4**" << endl;
	c = fun(a);
}

