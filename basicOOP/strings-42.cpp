// strings-42.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*

An object of class string can be created in many ways:

string( )
string(const string& pat, size_type start = 0, size_type cnt = npos)
string(const char* pat)
string(const char* pat, size_type cnt)
string(size_type cnt, char c)
string(const char* start, const char* fin) —  are overloaded constructors of class string.

*/

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	const char* cstr = "0123456789";
	string s(cstr + 1, cstr + 7);
	cout << s << endl;

	string  sk("Barcelona");
	string  s1(sk.begin() + 3, sk.end() - 2);
	cout << s1 << endl;


	const char* cstra = "strin";
	string s4, s2, s3, s5(" C++");
	s4 = cstra;
	s2 = 'g';
	s3 = s5;
	cout << s4 << s2 << s3 << endl;

	return 0;
}
