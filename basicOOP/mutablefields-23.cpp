// mutablefields-23.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
MUTABLE FIELDS

It sometimes happens that a method should behave as constant, but, for some reasons, e.g., for the sake of efficiency of implementation, 
it still shoud be capable of changing some members of the object it has been called for.

*/
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

struct FullInfo {
	string address;

	FullInfo(string name) {
		cout << "Fetching address from data base" << endl;
		address = "Mr " + name + "\'s address";
	}
};

class Customer {
	string name;
	mutable FullInfo *fullInfo;
public:
	Customer(string n) {
		name = n;
		fullInfo = nullptr;
	}

	string getInfo() const {
		return name;
	}

	string getFullInfo() const {
		if (fullInfo == nullptr)
			fullInfo = new FullInfo(name);
		return name + ", " + fullInfo->address;
	}

	~Customer() {
		delete fullInfo;
		cout << "deleting " + name << endl;
	}
};



int main()
{
	Customer customer("Smith");
	cout << customer.getInfo() << endl;
	cout << customer.getFullInfo() << endl;
	cout << "End of \'main\'\n";
}


/*
VOLATILE METHODS

Methods can also be declared as volatile. Such a method is obliged to access 
(for reading or modifying) members of object every time it follows from the code of the method.
*/

/*
COPY CONSTRUCTORS

Very important rôle is played by the so called copy-constructors. In particular, they are needed when a class contains fields of pointer types
in such situations, destructors and assignment operator overloading are usually necessary as well.
*/