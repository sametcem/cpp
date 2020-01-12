// multbase-74.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 

/*
class C public A, B {
		   // ...
	   };

declares class  C which inherits from  A (publicly) and from  B (privately).

*/

#include "pch.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Printable {
protected:
	ostream& str;
public:
	Printable(ostream& str)
		: str(str)
	{ }
	virtual void print() const = 0;
};

class Person : public Printable {
	string name;
	int   birth;
public:
	Person(string n, int b, ostream& str = cout)
		: Printable(str), name(n), birth(b)
	{ }

	void print() const {
		str << name + " (" << birth << ")" << endl;
	}
};

class Figure {
protected:
	static const double PI;
	string name;
public:
	virtual double getArea() const = 0;
	Figure(string name) : name(name) { }
};

const double Figure::PI = 4 * atan(1.);

class Circle : public Figure, public Printable {
	double radius;
public:
	Circle(string n, double r, ostream& str = cout)
		: Figure(n), Printable(str), radius(r)
	{ }
	double getArea() const { return PI * radius*radius; }
	void   print() const {
		str << "circle " << name << " with radius "
			<< radius << " and area " << getArea() << endl;
	}
};

class Square : public Figure {
	double side;
public:
	Square(string n, double s)
		: Figure(n), side(s)
	{ }
	double getArea() const { return side * side; }
	void print() const {
		cout << "square " << name << " with side "
			<< side << " and area " << getArea() << endl;
	}
};

void printArray(Printable* arr[], int size) {
	for (int i = 0; i < size; ++i)
		arr[i]->print();
}


int main()
{
	Circle ci1("first", 2, cout),
		*pci2 = new Circle("second", 3);
	Square sq1("first", 4),
		*psq2 = new Square("second", 5);
	Person ps1("Jim", 1972),
		*pps2 = new Person("Tom", 1978, cout);

	Printable* arr[] = { &ci1, &ps1, pci2, pps2 };

	cout << "** Printing array of Printables" << endl;
	printArray(arr, 4);

	cout << "** Printing Squares" << endl;
	sq1.print();
	psq2->print();

	delete pci2;
	delete psq2;
	delete pps2;
}
