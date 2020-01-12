// algorithm-search-93.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <cctype>    // tolower
#include <algorithm>
#include <iterator>
using namespace std;

bool startsWithA(string& s) {
	return s[0] == 'A';
}

void lowerc(string& name) {
	name[0] = tolower(name[0]);
}

int main() {
	vector<string> vs;

	vs.push_back("Maggie"); vs.push_back("Ann");
	vs.push_back("Monica"); vs.push_back("Agatha");
	vs.push_back("Alice");  vs.push_back("Ursula");

	vector<string>::iterator k;

	k = find(vs.begin(), vs.end(), "Ann");
	if (k != vs.end())
		cout << *k << " found\n";
	else
		cout << "Ann not found\n";

	k = find(vs.begin(), vs.end(), "Kate");
	if (k != vs.end())
		cout << *k << " found\n";
	else
		cout << "Kate not found\n";


	cout << "\nAmong names\n";
	copy(vs.begin(), vs.end(),
		ostream_iterator<string>(cout, " "));
	cout << "\nthe following start with \'A\':\n";
	k = vs.begin();
	while (k < vs.end()) {
		k = find_if(k, vs.end(), startsWithA);
		if (k != vs.end()) cout << *k++ << " ";
	}
	cout << endl;

	for_each(vs.begin(), vs.end(), lowerc);
	cout << "\nAfter changing to lower case:\n";
	copy(vs.begin(), vs.end(),
		ostream_iterator<string>(cout, " "));
	cout << endl;
}