// dista-89.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

int main() {
	vector<string> vec;
#define __WIN32
#if   defined(__WIN32)
	cout << "List of words (^Z ends): ";
#elif defined(__linux)
	cout << "List of words (^D ends): ";
#else
#error Unknown system
#endif

	string s;
	while (cin >> s) vec.push_back(s);
	cin.clear();

	list<string> lis(vec.begin(), vec.end());

	cout << "Word to find: ";
	cin >> s;

	vector<string>::iterator sit;
	list<string>::iterator   lit;

	// wektor
	for (sit = vec.begin(); sit != vec.end(); ++sit)
		if (*sit == s) break;
	if (sit != vec.end())
		cout << "Word " << s << " on position "
		<< sit - vec.begin() << endl;
	else
		cout << "Word " << s << " did not appear" << endl;

	// lista
	for (lit = lis.begin(); lit != lis.end(); ++lit)
		if (*lit == s) break;
	if (lit != lis.end())
		cout << "Word " << s << " on position "
		<< distance(lis.begin(), lit) << endl;
	else
		cout << "Word " << s << " did not appear" << endl;
}