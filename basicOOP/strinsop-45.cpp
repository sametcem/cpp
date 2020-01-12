// strinsop-45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	int age;

public:
	Person(string name,int age) : name(name) , age(age) {}

	friend ostream& operator<<(ostream&, const Person&);
};

ostream& operator<<(ostream& str, const Person& k) { // Overloading
	return str << k.name << " (" << k.age << " years old...)";
}

int main()
{
	Person t[] = { Person("Joe",18), Person("Sue",26),
					Person("Eve",35), Person("Tim",11) };

	for (int i = 0; i < 4; i++)
		cout << t[i] << endl;
}
