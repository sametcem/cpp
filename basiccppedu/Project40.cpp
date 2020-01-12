// Project40.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

struct Person {
	int age;
	double weight;
};

int main()
{
	Person person;
	person.age = 5;

	Person &ref = person;
	ref.age = 12;

	Person *ptr = &ref;
	(*ptr).age = 13;


	std::cout << person.age;
}
