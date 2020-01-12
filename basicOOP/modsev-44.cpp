// modsev-44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


/*
We redefine then the operation of adding numbers of type Modulo. 
On lines 27-29 we define a function named operator+, with two parameters of type Modulo. 
This function will be called whenever a ' +' symbol is encountered with expressions of type Modulo as operands on both sides of the operator. This will happen on line 24: our function will be invoked and will return an object of type Modulo representing the sum of the arguments 
(or whatever we put into the function's definition)

*/
#include "pch.h"
#include <iostream>
using namespace std;

struct Modulo {
	static const int modul;
	int numb;

	Modulo() : numb(0) {}

	Modulo(int numb) : numb(numb%modul) {}
};

const int Modulo::modul = 7;

Modulo operator+(Modulo m, Modulo n) {
	return Modulo(m.numb + n.numb);
}

int main() {
	Modulo m(5), n(6), k;

	k = m + n;
	cout << m.numb << " + " << n.numb
		<< " (mod " << Modulo::modul
		<< ") = " << k.numb << endl;

	k = operator+(m, n);
	cout << m.numb << " + " << n.numb
		<< " (mod " << Modulo::modul
		<< ") = " << k.numb << endl;
}
