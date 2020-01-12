// inheritance-63.cpp : This file contains the 'main' function. Program execution begins and ends there.


// INHERITANCE      Furniture <- Chair  
// Class A : (public,private,protected,  ) B
/*
 This keyword determines the upper limit of accessibility for the inherited members (see section on accessibility of class members).
*/

/*
The public specifier means that all public members from the base class are public in derived class and protected remain protected; private members are not visible at all;
The protected specifier means that public members of the base class become protected in derived class and protected remain protected;
The private specifier means that all public and protected members of the base class become private in derived classes.
*/

/*
protected members are accessible (as if they were public) in derived classes, but inaccessible (as if they were private) in all other scopes.
*/

/*
If there is no accessibility specifier at all, it is assumed that the inheritance is private.
*/

/*
 Field k is private and will ot be visible at all in derived classes.

 class A {
		   double k;

	   public:
		   int x, y, z

	   protected:
		   double fff(int);
		   double ggg(int);
		   double hhh(int);
		   // ...
	   };

	   Now, class B is defined as follows:
	  1.      class B : private A {
	  2.      public:
	  3.          A::x;
	  4.          A::y;
	  5.
	  6.      protected:
	  7.          A::fff;
	  8.          // ...
	  9.      };

	  Note that we have not restored the original accessibility of z — in class B it will become private.
	  Similarly, on lines 6-7 we restored protected accessibility of fff (just by specifying its qualified name in protected section of class definition). The methods ggg and hhh will be private in class B.
*/

/*
Derived class can redefine members with the same name as members inherited from base classes.
We then say about overriding inherited members.
It is best not to override fields — this, alhough possible, usually leads to uncontrolled chaos. However, overriding methods is very common and is actually the essence of object programming.

*/

#include "pch.h"
#include <iostream>
using namespace std;

class A {
public:
	int fun(int x) { return x * x; }
};

class B : private A {
	int fun(int x, int y) {
		return A::fun(x) + y * y;
	}
public:
	int pub(int x, int y) { return fun(x, y); }
};

int main()
{
	A a;
	B b;
	cout << "a.fun(3)   = " << a.fun(3) << endl;
	cout << "b.pub(3,4) = " << b.pub(3, 4) << endl;
	// cout << "b.fun(3,4) = " << b.fun(3,4) << endl;
}

