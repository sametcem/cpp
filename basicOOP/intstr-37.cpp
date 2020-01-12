// intstr-37.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <sstream>
using namespace std;

void words(const string& s) {
	istringstream istr(s);

	string word;
	while (istr >> word)
		cout << word << endl;
}

int main() {
	string s = "Bach Haydn";
	ostringstream ostr(s, ios::ate); //We open an output internal file initialized with the content of string s
	ostr << " Chopin";
	string s1 = ostr.str();
	words(s1);
}