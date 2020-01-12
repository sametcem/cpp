// Project12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//There are many instances in programming where we need more than one variable in order to represent an object. (STRUCT)

#include "pch.h"
#include <iostream>

struct Employee
{
	short id;
	int age;
	double wage;
};

struct Company
{
	Employee CEO; // Employee is a struct within the Company struct
	int numberOfEmployees;
};

struct Rectangle
{
	double length = 1.0; // non-static member initialization
	double width = 1.0;
};

void printInformation(Employee employee)
{
	std::cout << "ID:   " << employee.id << "\n";
	std::cout << "Age:  " << employee.age << "\n";
	std::cout << "Wage: " << employee.wage << "\n";
}

int main()
{
	Company myCompany = { { 1, 42, 60000.0f }, 5 };
	auto d = 5.0; // 5.0 is a double literal, so d will be type double


	Rectangle x{ 2.0, 2.0 }; // uniform initialization


	Employee joe; // create an Employee struct for Joe
	joe.id = 14; // assign a value to member id within struct joe
	joe.age = 32; // assign a value to member age within struct joe
	joe.wage = 24.15; // assign a value to member wage within struct joe

	Employee frank; // create an Employee struct for Frank
	frank.id = 15; // assign a value to member id within struct frank
	frank.age = 28; // assign a value to member age within struct frank
	frank.wage = 18.27; // assign a value to member wage within struct frank

    //std::cout << joe.wage; 

	printInformation(joe);
	printInformation(frank);


	int totalAge = joe.age + frank.age;

	if (joe.wage > frank.wage)
		std::cout << "Joe makes more than Frank\n";
	else if (joe.wage < frank.wage)
		std::cout << "Joe makes less than Frank\n";
	else
		std::cout << "Joe and Frank make the same amount\n";

	// Frank got a promotion
	frank.wage += 2.50;

	// Today is Joe's birthday
	++joe.age; // use pre-increment to increment Joe's age by 1

	Employee frey = { 1, 32, 60000.0 }; // joe.id = 1, joe.age = 32, joe.wage = 60000.0
	Employee mark = { 2, 28 }; // frank.id = 2, frank.age = 28, frank.wage = 0.0 (default initialization)
}

