// algorithm-compar-91.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

bool compar(int a, int b) {
	return (a % 2 == 0) && (b % 2 != 0);
}

int main() {
	vector<int> vec;
	int d;
	while (cin >> d) vec.push_back(d);
	cin.clear();

	sort(vec.begin(), vec.end(), compar);

	copy(vec.begin(), vec.end(),
		ostream_iterator<int>(cout, " "));
	cout << endl;
}