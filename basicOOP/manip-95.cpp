// manip-95.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Function objects can also be used for creating our own manipulators. In section on manipulators we described manipulators with arguments.

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct maniparg {
	string str;
	maniparg(int cnt, char c) : str(cnt, c) { }
	ostream& operator()(ostream& s) const {
		return s << str;
	}
};

ostream& operator<<(ostream& s, const maniparg& manip) { //We create class maniparg and, in the usual way, we overload operator '<<' for this class
	return manip(s);
}

int main() {
	cout << maniparg(7, '*') << "This is maniparg"
		<< maniparg(3, '!') << maniparg(7, '*') << endl;

	maniparg threeexcls(3, '!');
	maniparg sevenstars(7, '*');

	cout << sevenstars << "This is maniparg"
		<< threeexcls << sevenstars << endl;
}