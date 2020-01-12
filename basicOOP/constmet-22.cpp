// constmet-22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Constant Methods
/*
Methods of classes can be declared as constant. 
Such declaration informs the compiler that a method will not modify the state of the object that this method has been invoked on.
-
if declaration and definition are separated, the const keyword must be specified in both of them.
-
only methods declared as constant can be invoked for constant objects.
*/

#include "pch.h"
#include <iostream>
using namespace std;

class Point {
	double x, y;
public:
	Point(double x, double y) {
		this->x = x;
		this->y = y;
	}
	Point translate(double dx, double dy) const; //this makes their types sufficiently different for such overloading to be valid. 
	void  translate(double dx, double dy);
};

Point Point::translate(double dx, double dy) const {
	cout << "const translate\n";
	return Point(x + dx, y + dy);
}

void Point::translate(double dx, double dy) {
	cout << "nonconst translate\n";
	x += dx;
	y += dy;
}


int main()
{
	const Point p1(1, 1);
	Point p2(2, 2);

	p1.translate(3, 3);
	p2.translate(4, 4);
}

