// acc-11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
A SAMPLE DOT PRODUCT
Function dot_product, being a member of the class, has access to private members x, y, z of the object w1 
on which it was invoked (which are referred to just by their unqualified names), 
as well as of the object w2 which was passed to it by reference.
*/

#include "pch.h"
#include <iostream>
using namespace std;

class Vector {
	double x, y, z;
public:
	void set(double xx, double yy, double zz) {
		x = xx;
		y = yy;
		z = zz;
	}

	double dotproduct(const Vector& w) {
		return x * w.x + y * w.y + z * w.z;
	}
};

int main()
{
	Vector v1, v2;
	v1.set(1, 2, 3);
	v2.set(2, 3, 4);
	cout << "w1*w2 = " << v1.dotproduct(v2) << endl;
}

