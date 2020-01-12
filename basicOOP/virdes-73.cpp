// virdes-73.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Virtual Destructors

/*
Generally, destructor of a class which is likely to be publicly subclassed should be made virtual.

Suppose we have a pointer of the base class type, but pointing to an object of a derived class. 
What will happen if we call the destructor (using delete) through this pointer? 
If the base-class destructor is not virtual, we will have a problem: 
this situation will corespond to early binding, so the destructor from the base class will be invoked.
*/



#include "pch.h"
#include <iostream>
using namespace std;

class Name {
	char* name;
public:
	Name(const char *n) : name(strcpy(new char[strlen(n) + 1], n))
	{
		cout << "Ctor Name" << name << endl;
	}
	
	virtual //we would make the destructor non-virtual.
		~Name() {
		cout << "Dtor Name: " << name << endl;
		delete[] name;
	}
};

class Full : public Name {
	char* first;
public:
	Full(const char* i, const char* n)
		: Name(n),
		first(strcpy(new char[strlen(i) + 1], i))
	{
		cout << "Ctor Full, first: " << first << endl;
	}

	~Full() {
		cout << "Dtor Full, first: " << first << endl;
		delete[] first;
	}
};

int main()
{
	Name* person = new Full("John", "McGuire");
	delete person;
}

/*
However, due to polymorphism, when the object is deleted (line 53), the destructor from the true class of the object (i.e., Full) will be invoked.

Ctor Name: McGuire
	Ctor Full, first: John
	Dtor Full, first: John
	Dtor Name: McGuire


*/