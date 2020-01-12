// consructors-16.cpp : This file contains the 'main' function. Program execution begins and ends there.

/*
CONSTRUCTORS  -> a method which will be invoked when an object is being created.
- 
the compiler will provide one —  the default constructor which will be public, with no parameters and which does nothing.
Many constructors can be declared and defined in the same class, i.e., they can be overloaded. All have the same name — the name of the class.
-
As a consequence, it does make sense to use the pointer this in the body of constructors: the members of this object already exist. However, until the constructor exits, the object is considered still in the process of creation and is not accessible from the „outer world” 
(for example, in multithreaded environment).


DESTRUCTORS

Constructors are functions which are called when an object is being created. However, there is a symmetry in C++ in this respect: „symmetrically” to constructors, there are also descrtuctors — 
functions which are invoked when objects of a class are removed from memory.
-
Destructors do not destruct anythig „by themselves”! They are just invoked when objects are being removed. 
Such a removal of object created on the stack (as a local variable) takes place when the flow of control leaves the innermost block in which the object has been defined

-
We do not have to define a destructor in a class. If it is not defined, the system will provide a default public destructor which does nothing.
If, however, we do want to define a destructor, its name must be identical to the name of the enclosing class, prepended by a tilde character, like ˜Name.

AClass* object = new AClass();
	   object -> ~AClass();

Destructors, unlike constructors, behave like normal methods of classes. In particular, they can be invoked manually,
by their name. The only difference is that they will be called automatically when objects are destroyed. 
When invoked,
they do exactly what is coded in their definition, no more, no less.

This will not do any harm to the object!


*/

#include "pch.h"
#include <iostream>

int main()
{
    std::cout << "Hello World!\n"; 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
