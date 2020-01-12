// minus-50.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;


class A {
	int data;
	
public:
	A(int data = 0) : data(2 * (data / 2)) {}  //A number stored in this member will always be even: this is ensured by the only constructor of the class

	const A operator-() const {
		return A(-data);
	}

	const A operator-(A& a) const {
		return A(data - a.data);
	}

	A& operator--() {
		----data;
		return *this;
	}

	const A operator--(int) {
		A x(data);
		----data;
		return x;
	}

	friend ostream& operator<<(ostream&, A);
};

ostream& operator<<(ostream& strum, A d) {
	return strum << d.data;


}

int main() {
	A data(7);

	cout << "a.   data    = " << data << endl;
	cout << "b.   data--  = " << data-- << endl;
	cout << "c.   data    = " << data << endl;
	cout << "d. --data    = " << --data << endl;
	cout << "e.   data    = " << data << endl;
	cout << "f.  -data    = " << -data << endl;
	cout << "g.   data    = " << data << endl;
}
