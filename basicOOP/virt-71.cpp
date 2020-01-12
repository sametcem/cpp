// virt-71.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
classes in which methods are declared, but not defined. Such methods should be, of course, virtual —  
they are then implemented (defined) in derived classes (which then become concrete classes). 
One cannot create objects of abstract classes.

A method is declared as pure virtual (without any implementation) by replacing its body by ' =0'
*/


//Class Figure is an abstract class.
#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Figure {
protected:
	static const double PI;
public:
	virtual double getArea() = 0;
	virtual double getPerimeter() = 0;
	virtual void   info(ostream&) = 0;
	static  double totalArea(Figure* arr[], int size) {
		double sum = 0;
		for (int i = 0; i < size; ++i)
			sum += arr[i]->getArea();
		return sum;
	}
	static  Figure* maxPerim(Figure* arr[], int size) {
		int ind = 0;
		for (int i = 0; i < size; ++i)
			if (arr[i]->getPerimeter() >
				arr[ind]->getPerimeter())
				ind = i;
		return arr[ind];
	}
};

const double Figure::PI = 4 * atan(1.);
void Figure::info(ostream& str) {
	str << "Figure: ";
}

class Circle : public Figure {
	double radius;
public:
	Circle(double r) : radius(r) { }
	double getArea() { return PI * radius*radius; }
	double getPerimeter() { return 2 * PI*radius; }
	void   info(ostream& str) {
		Figure::info(str);
		str << "circle with radius " << radius;
	}
};

class Square : public Figure {
	double side;
public:
	Square(double s) : side(s) { }
	double getArea() { return side * side; }
	double getPerimeter() { return 4 * side; }
	void   info(ostream& str) {
		Figure::info(str);
		str << "square with side   " << side;
	}
};


int main()
{
	Figure* arr[] = { new Circle(1.), new Square(1.),
					 new Circle(2.), new Square(3.)
	};
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size; ++i) {
		arr[i]->info(cout);
		cout << endl;
	}
	Figure* maxper = Figure::maxPerim(arr, size);
	cout << "Total area: " << Figure::totalArea(arr, size)
		<< "\nFigure with maximum perimeter: ";
	maxper->info(cout);
	cout << "\n has perimeter "
		<< maxper->getPerimeter() << endl;
}

