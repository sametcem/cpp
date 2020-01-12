// methods-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Fields of a class decribe type of data which will be contained in each object of the class
//Methods define operations that can be performed on objects and data they contain. 



#include "pch.h"
#include <iostream>
using namespace std;

class Vector {
	double x, y, z;
public:
	void set(double xx, double yy, double zz);
	double dot_product(const Vector& w);
};


void Vector::set(double xx, double yy, double zz) {
	x = xx;
	y = yy;
	z = zz;
}

double Vector::dot_product(const Vector& w) {
	return x * w.x + y * w.y + z * w.z;
}


int main()
{
	Vector w1, w2;
	w1.set(1, 1, 2);
	w2.set(1, -1, 2);
	cout << "w1*w2 = " << w1.dot_product(w2) << endl;
}


