// person1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;
/*
strlen — returns the length of a C-string pointed to by an argument of type char*, excluding the ' \0' character which terminates the string;

strcpy — copies a C-string pointed to by the second argument to an array of characters pointed to by the first argument (note the order!), including the ' \0' charecter terminating the string;
returns the address passed as the first argument.
*/
class Person1 {
public:
	int age;
	char* name;
	Person1(int w, const char* n) {
		this->age = w;
		name = new char[strlen(n) + 1];
		strcpy(name, n);

	}
};

int main()
{
	char name[] = "Bill";
	Person1 bill(29, name);
	name[0] = 'J';
	cout << "From original: " << name << endl;
	cout << "From object  : " << bill.name << endl;

}

