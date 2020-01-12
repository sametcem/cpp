// vecpoin-46.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Point;

class Vector {
	double x, y, z;
public:
	Vector(double x = 0, double y = 0, double z = 0)
		: x(x), y(y), z(z)
	{ }

	friend Point    operator+(const Point&, const Vector&);
	friend Vector   operator+(const Vector&, const Vector&);
	friend ostream& operator<<(ostream&, const Vector&);
};

class Point {
	double x, y, z;
public:
	Point(double x = 0, double y = 0, double z = 0)
		: x(x), y(y), z(z)
	{ }
	friend Point operator+(const Point&, const Vector&);
	friend ostream& operator<<(ostream&, const Point&);
};

Point operator+(const Point&  p, const Vector& v) {
	return Point(p.x + v.x, p.y + v.y, p.z + v.z);
}

Vector operator+(const Vector& v1, const Vector& v2) {
	return Vector(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

ostream& operator<<(ostream& str, const Point& p) {
	return str << "P(" << p.x << "," << p.y
		<< "," << p.z << ")";
}

ostream& operator<<(ostream& str, const Vector& v) {
	return str << "V[" << v.x << "," << v.y
		<< "," << v.z << "]";
}

int main()
{
	Vector v1(1, 1, 1), v2(2, 2, 2);
	Point  p1(1, 2, 3);

	Vector v = v1 + v2;
	cout << "v: " << v << endl;

	Point  p = p1 + v;
	cout << "p: " << p << endl;
}

