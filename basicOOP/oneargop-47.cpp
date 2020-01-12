// oneargop-47.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Unary (one-argument) operators can be overloaded by global one-parameter functions with prototype of the form
//Type operator@(Typearg);

/*
@a
is equivalent to invocation
operator@(a)
*/


#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct AClass {
	string name;

	AClass(string name) : name(name) {}
};

bool operator!(const AClass& c) {
	return c.name.size() > 5;
} 


int main()
{
	AClass t[] = { AClass("Marlon"), AClass("Henry"),
					AClass("Dave"),   AClass("Horatio"),
					AClass("Sue"),    AClass("Alice") };

	for (int i = 0; i < 6; ++i)
		if (!t[i]) cout << t[i].name << endl;  // If the length is bigger than 5,write it...
}

