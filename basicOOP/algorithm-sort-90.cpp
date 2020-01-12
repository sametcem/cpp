// algorithm-sort-90.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main()
{
	vector<string> vec;
	string s;
	while (cin >> s) vec.push_back(s);
	cin.clear();

	vector<string>::iterator ini = vec.begin(),
							fini = vec.end();
    
	list<string> lis(vec.size() - 2);
	copy(ini + 1, fini - 1, lis.begin());

	sort(ini, fini);
	lis.sort();

	copy(ini, fini, ostream_iterator<string>(cout, " "));
	cout << endl;

	copy(lis.begin(), lis.end(),
		ostream_iterator<string>(cout, " "));
	cout << endl;

}
