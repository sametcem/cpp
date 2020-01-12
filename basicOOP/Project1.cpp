
//Introduction to OOP.

/*
Therefore, it is possible to define our own types of data, 
together with operations that can be performed on objects of this type. 
We do it by defining classes (as in other object oriented languages). 
For historical reasons, classes in C++ come it two flavors: classes and structures.


However, compound types also exist in traditional C: these are structures and unions.
In C++ the implementation of structures has been extended, so structures and classes basically do not differ very much.

C-structure is a collection of named members which can be of different types, also other structure types.
*/

/*
	  1.      a.x     = 3.14;
	  2.      (&a)->x = 3.14;
	  3.      pa->x   = 3.14;
	  4.      (*pa).x = 3.14;
the symbol a.b denotes a member b of an object a, while pa->b denotes a member b of the object pointed to by a pointer pa.
*/
#include "pch.h"
#include <iostream>

struct AName {
	int age;
	char* name; // age and name are fields here.
};

struct {  // Here we constructed two objects named a and b.Each of them contains two members corresponding to the two fields of the structure.
	int d;
	int f;
}a,b;


int main()
{
    std::cout << "Hello World!\n"; 
}

