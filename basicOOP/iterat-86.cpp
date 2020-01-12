// iterat-86.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	vector<string> vs;

	vs.push_back("Mary");
	vs.push_back("Lucy");
	vs.push_back("Ella");
	vs.push_back("Jill");

	for (vector<string>::iterator ite = vs.begin();
		ite != vs.end(); ++ite)
		cout << *ite << " ";
	cout << endl;

	// or

	vector<string>::iterator it, kon = vs.end();

	for (it = vs.begin(); it != kon; ++it)
		cout << *it << " ";
	cout << endl;

	// or

	typedef vector<string>::iterator SIT;

	SIT iter, koniec = vs.end();

	for (iter = vs.begin(); iter != koniec; ++iter)
		cout << *iter << " ";
	cout << endl;
}