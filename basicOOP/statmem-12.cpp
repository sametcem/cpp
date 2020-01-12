// statmem-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


/*
Unlike nonstatic members, a static member of a class may be of type of this class, 
because physically it will not be contained in objects (only one copy exists).
the class (structure) Point has a static member of this same type: nonstatic members x and  y represent 
co-ordinates of a point and may be different for each object, but center is only one and can represent
a point relative to which distances will be calculated
*/
#include "pch.h"
#include <iostream>
using namespace std;

struct Point {
	double x, y;
	static Point center; // static members declares inside but definition and initialization is outside.
};

Point Point::center;

void set_center(double, double);
double dist_from_cen(const Point&);

int main() {
	Point P = { 3, 4 };
	cout << "Point P = (" << P.x << "," << P.y << ")\n";

	set_center(0, 0);
	cout << "Dist P-center: " << dist_from_cen(P) << endl;

	set_center(9, -4);
	cout << "Dist P-center: " << dist_from_cen(P) << endl;
}

void set_center(double xx, double yy) {
	Point::center.x = xx;
	Point::center.y = yy;
	cout << "Center in (" << xx << "," << yy << ")\n";
}

double dist_from_cen(const Point& p) {
	return
		sqrt((p.x - Point::center.x)*(p.x - Point::center.x) +
		(p.y - Point::center.y)*(p.y - Point::center.y));
}