// ovrlderr-52.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstring>   // strcpy, strlen
using namespace std;

struct A {
	char* name;

	A(const char* s)
		: name(strcpy(new char[strlen(s) + 1], s)) {
		cerr << "  ctor: " << (void*)name << endl;
	}

	A(const A& k)
		: name(strcpy(new char[strlen(k.name) + 1], k.name)) {
		cerr << "cpctor: " << (void*)name << endl;
	}

	~A() {
		cerr << "  dtor: " << (void*)name << endl;
		delete[] name;
	}
};

A ob1("ob1");

int main() {
	cerr << "MAIN" << endl;
	A ob2(ob1);
	A ob3 = ob2; // copy-ctor

	ob1 = ob3;

	cerr << "  ob1.name: " << (void*)ob1.name << endl;
	cerr << "  ob3.name: " << (void*)ob3.name << endl;

	cerr << "THE END" << endl;
}