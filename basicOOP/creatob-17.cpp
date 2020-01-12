// creatob-17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
The fields of the class are of type int (the field a) and of type char (id). 
These are nonstatic fields, what means that every object of the class will contain members with these names and types. 
One field is declared as static: it is ID of type char. 
As we know, for static fields the declaration is not enough: outside the class we have to define it

*/

#include "pch.h"
#include <iostream>
using namespace std;

class AClass {
	static char ID;
	int a;
	char id;
public:
	AClass() {
		id = ID++;
		a = 0;
		cout << "Ctor()    " << id << a << endl;
	}

	AClass(int aa) {
		id = ID++;
		a = aa;
		cout << "Ctor(int) " << id << a << endl;
	}

	~AClass() {
		cout << "Dtor      " << id << a << endl;
	}
};

char AClass::ID = 'A'; //it was initialized on line 38 by the ASCII code of the letter 'A'
AClass k1;                           // <- A
 //AClass ka();  // WRONG! -> empty parentheses must be omitted!

int main()
{
	cout << "Entering \'main\'" << endl;

	// AClass kb = AClass; // WRONG!
	{
		AClass k3 = AClass();        // <- C
		AClass k4 = AClass(4);       // <- D
	}

	AClass* pk5 = new AClass;        // <- E
	AClass* pk6 = new AClass();      // <- F
	AClass* pk7 = new AClass(7);     // <- G

	delete pk6;
	delete pk7;

	cout << "Leaving  \'main\'" << endl;
}

AClass k2(2);                       // <- B

