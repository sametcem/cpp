// modsev1-48.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Modulo {
	int numb;
public:
	static const int modul;
	Modulo() : numb(0)
	{ }

	Modulo(int numb) : numb(numb%modul)
	{ }

	Modulo operator+(const Modulo&) const;
	friend ostream& operator<<(ostream&, const Modulo&);
};

const int Modulo::modul = 7;

inline Modulo Modulo::operator+(const Modulo& n) const {
	return Modulo(numb + n.numb);
}

ostream& operator<<(ostream& str, const Modulo& n) {
	return str << n.numb;
}

int main()
{
	Modulo m(5), n(6), k;

	k = m + n;
	cout << m << " + " << n
		<< " (mod " << Modulo::modul
		<< ") = " << k << endl;

	k = k + 8;
	cout << "k + 8 (mod " << Modulo::modul
		<< ") = " << k << endl;
}

