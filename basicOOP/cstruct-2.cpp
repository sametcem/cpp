// cstruct-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

struct Car {
	double speed;
	int year;
} skoda,fiat = {100,1998};

void pr(const char*, const Car*);

int main()
{
	Car toyota, *myCar = &toyota, *vw;

	cout << "Size of \'Car\' objects is "
		<< sizeof(Car) << " bytes\n";

	skoda.speed = 120;
	skoda.year = 1995;

	toyota.year = 2012;
	myCar->speed = 180;

	vw = new Car{ 175,2003 };
	vw->speed = 175;
	vw->year = 2003;

	pr("Skoda ", &skoda);
	pr("Fiat  ", &fiat);
	pr("Toyota", &toyota);
	pr("myCar ", myCar);
	pr("VW    ", vw);

	delete vw;
}

void pr(const char *name, const Car *car) {
	cout << name << ": speed" << car->speed << " , year" << car->year << endl;
}