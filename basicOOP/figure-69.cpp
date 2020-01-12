// figure-69.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Figure {
protected:
	int height;
public:
	Figure(int height = 0) : height(height) {}

	virtual void what() {
		cout << "Figure h = " << height << endl;
	}
};

class Rectangle : public Figure {
private:
	int base;
	void what() {
		cout << "Rectangle: (h,b)=(" << height
			<< "," << base << ")\n";
	}
public:
	Rectangle(int height = 0, int base = 0)
		: Figure(height), base(base) {}
};

//Virtual method what is public in class Figure (line 11). In class Rectangle, this method is overriden as private
int main()
{
	Figure    *f = new Rectangle(4, 5), &rf = *f;
	Rectangle *p = new Rectangle(40, 50);

	// what private in Rectangle, but not in Figure!
	f->what();                         // Rectangle
	rf.what();                         // Rectangle

	// p->what(); wrong, since what private in Rectangle
	  // But those two lines are OK!
	((Figure*)p)->what();              // Rectangle
	((Figure&)*p).what();              // Rectangle

	  // OK: public version from the base class Figure
	p->Figure::what();                 // Figure
}

