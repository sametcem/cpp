// algorithm-predic-92.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

bool even(int a) {
	return (a & 1) == 0;
}

int main() {
	vector<int> vec;
	int d;
	while (cin >> d) vec.push_back(d);
	cin.clear();

	cout << "In the series ";
	copy(vec.begin(), vec.end(),
		ostream_iterator<int>(cout, " "));
	cout << "\nthere are "
		<< count_if(vec.begin(), vec.end(), even)
		<< " even numbers\n";
}