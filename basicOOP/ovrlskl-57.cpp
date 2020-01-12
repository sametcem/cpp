// ovrlskl-57.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

struct Point {
	int x, y;

	Point(int x = 0, int y=0) : x(x), y(y) {}

	double r2() const { return x * x + y * y;  }

};

struct Segment {
	Point A, B;
	Segment(Point A = Point(), Point B = Point())
		: A(A), B(B)
	{ }

	const Point* operator->() const {
		return (A.r2() < B.r2()) ? &A : &B;
	}
};

ostream& operator<<(ostream& str, const Point& A) {
	return str << "P[" << A.x << "," << A.y << "]";
}

ostream& operator<<(ostream& str, const Segment& AB) {
	return str << AB.A << "--" << AB.B;
}

int main()
{
	Point    A(1, 0), B(8, 6), C(4, 3);
	Segment AB(A, B), BC(B, C), CA(C, A);

	cout << "AB = " << AB << ": AB->x = "
		<< AB->x << endl;

	cout << "BC = " << BC << ": BC->y = "
		<< BC->y << endl;

	cout << "CA = " << CA << ": CA->x = "
		<< CA->x << endl;
}

/*
The overloading method returns the pointer to (address of) the endpoint which lies closer to the origin of the coordinate system.

*/