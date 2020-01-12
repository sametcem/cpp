// Project19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void print(const char* t) {
	cout << "String: " << t << endl;
}

int main() {
	char  t1[] = "Bettya";
	char  t2[] = { 'K', 'i', 't', 't', 'y','a', '\0' };
	const char *t3 = "Alice";
	cout << "sizeof t1   : " << sizeof(t1) << endl;
	cout << "sizeof t2   : " << sizeof(t2) << endl;
	cout << "sizeof t3   : " << sizeof(t3) << endl;
	cout << "sizeof \'Ronald\': " << sizeof("Eve") << endl;
	t1[0] = 'X';
	t2[0] = 'X';
	//tab3[0] = 'X'; // WRONG

	print(t1);
	print(t2);
	print(t3);
}

