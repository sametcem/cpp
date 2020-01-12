// delegconstr-26.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

class Point {
	double x, y;
public:
	Point(double x, double y) : x(x), y(y) {
		std::cerr << "CTOR 1: (double,double)\n";
	}

	Point(double x) : Point(x, 0) {
		std::cerr << "CTOR 2: (double)\n";
	}
	Point() : Point(0) {
		std::cerr << "CTOR 3: ()\n";
	}
};

int main()
{
	std::cerr << "Point p1(1,1)\n";
	Point p1(1, 1);
	std::cerr << "\nPoint p2(2)\n";
	Point p2(2);
	std::cerr << "\nPoint p3\n";
	Point p3;
}

/*
p3, the default constructor will delegate to the second and this in turn will delegate to the first; 
flow of control then returns to the second constructor and at the and back to the third (default) one.

*/

