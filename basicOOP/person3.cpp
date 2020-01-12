// person3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

class Person3 {   // a better class
public:
	int    age;
	char* name;
	Person3(int w, const char* n) { // ctor
		age = w;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	Person3(const Person3& p) {     // copy-ctor
		age = p.age;
		name = new char[strlen(p.name) + 1];
		strcpy(name, p.name);
	}
	~Person3() {                    // dtor
		delete[] name;
	}
};

int main() {
	char name[] = "Bill";

	Person3 bill(29, name);
	Person3 jill(bill);      // invoking copy-ctor

	cout << "After creation: bill " << bill.name << endl;
	cout << "                jill " << jill.name << endl;

	jill.name[0] = 'J';

	cout << "After change  : bill " << bill.name << endl;
	cout << "                jill " << jill.name << endl;
}