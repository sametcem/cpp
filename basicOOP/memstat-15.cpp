// memstat-15.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Static Member Functions (Looks like global func)

/*
Member functions of a class can be declared static. Such functions can be invoked even when there is no objext of the given class. Their names belong to the class' scope, 
so invokingthem from the outside of the class requires qualified names (with the name of the class and the scope operator ' ::').
-
As static member functions are not invoked for an object, there is no this available in their body. For the same reason, 
static functions cannot directly refer to any nonstatic members of the class.
-

Therefore, static member functions behave much like normal global functions, with an inportant difference: they belong to the scope of the class so 
they have access to names declared in this class (even if they are private).
*/
#include "pch.h"
#include <iostream>
using namespace std;

class Vector {
	double x, y, z;
public:
	void set(double xx = 0, double yy = 0, double zz = 0) {
		x = xx;
		y = yy;
		z = zz;
	}
	static double dot_product(const Vector& w1,
		const Vector& w2) {
		return w1.x * w2.x + w1.y * w2.y + w1.z * w2.z;
	}
};

int main() {
	Vector w1, w2, ww;
	w1.set(1, 1, 2);
	w2.set(1, -1, 2);

	cout << "w1*w2 = "
		<< Vector::dot_product(w1, w2) << endl;

	cout << "w1*w2 = "
		<< ww.dot_product(w1, w2) << endl;
}