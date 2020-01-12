// Project62.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Function Templates

#include "pch.h"
#include <iostream>
using namespace std;

template <typename T>   // class ve typename fark yok.
T larger(T k1, T k2) {
	cout << "T=" << typeid(T).name() << " ";
	return k1 < k2 ? k2 : k1;
}

double larger(double k1, double k2) {
	cout << "Spec. double";
	return k1 < k2 ? k2 : k1;
}

template<>
short larger<short>(short s1, short s2) {
	cout << "Spec. short";
	return s1 < s2 ? s2 : s1;
}

template<> // This will not work
long larger<long>(long k1, long k2) = delete;

int main() {
	short s1 = 4, s2 = 5;

	cout << larger(1.5, 2.5) << endl;
	cout << larger(111, 222) << endl;
	cout << larger('a', 'd') << endl;
	cout << larger<int>(s1, s2) << endl;
	//cout << larger(30L, 50L) << endl;


	/*
	The reason is, of course, the last line. Deleted functions are taken into consideration when looking for the best candidate; here it will be concretization of the template with T - long which gives a perfect match. It is after this candidate has been found and selected, when the compiler will „realize” that this function is deleted — no other candidate will then be looked for and the compilation will fail.
	*/
}