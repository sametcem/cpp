// triangs-25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

struct Point {
	double x, y;
	
	Point(double x,double y) //and a copy-constructor provided by the compiler Note that destructor is not needed either.
		: x(x),y(y)
	{}
	void show() const {
		cout << "(" << x << "," << y << ")" << endl;
	}
};

struct Triangle {
	Point a, b, c;
	Triangle(const Point&, const Point&, const Point&);
	Triangle(double, double, double, double, double, double);

	void show() const {
		cout << "Triangle ";
		a.show(); cout << "-";
		b.show(); cout << "-";
		c.show(); cout << endl;
	}

};

Triangle::Triangle(const Point &a, const Point &b,
	const Point &c)
	: a(a), b(b), c(c)
{ }

Triangle::Triangle(double x1, double y1, double x2,
	double y2, double x3, double y3)
	: a(x1, y1), b(x2, y2), c(x3, y3)
{ }


int main()
{
	Point a1(1, 1), b1(2, 2), c1(3, 3);
	Triangle T1(a1, b1, c1);
	Triangle T2(11, 22, 22, 33, 33, 44);
	T1.show();
	T2.show();
}

