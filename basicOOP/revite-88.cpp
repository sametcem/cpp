// revite-88.cpp : This file contains the 'main' function. Program execution begins and ends there.
// REVERSE ITERATOR

#include "pch.h"
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int main() {
	vector<string> vs;

	vs.push_back("Mary");
	vs.push_back("Lucy");
	vs.push_back("Ella");
	vs.push_back("Jill");

	typedef vector<string>::iterator         FWD;
	typedef vector<string>::reverse_iterator REV;

	FWD fiter, fwdend = vs.end();
	REV riter, revend = vs.rend();

	for (fiter = vs.begin(); fiter != fwdend; fiter++)
		cout << *fiter << " ";
	cout << endl;

	for (riter = vs.rbegin(); riter != revend; riter++)
		cout << *riter << " ";
	cout << endl;
}
