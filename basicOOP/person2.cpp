// person2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

class Person2 { // still not a good class...
public:
	int    age;
	char* name;
	Person2(int w, const char* n) {
		age = w;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
};

int main() {
	char name[] = "Bill";

	Person2 bill(29, name);
	Person2 jill(bill);            // invoking copy-ctor

	cout << "After creation: bill " << bill.name << endl;
	cout << "                jill " << jill.name << endl;

	jill.name[0] = 'J';

	cout << "After change  : bill " << bill.name << endl;
	cout << "                jill " << jill.name << endl;
}