// namespaces-83.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Namespaces are a relatively new mechanism added to C++ standard. It provides a way to gather 
logically connected set of names (of classes, functions, enumerations, etc.) 
into a group of names separated from other names appearing in a program.

double x, y, v, w;
	   // ...
	   x = GUI::calculate(v);
	   y = Business::calculate(w);

	   using GUI::calculate; -> the name calculate will refer to the function of this name from namespace GUI, so it will be an alias of GUI::calculate. 
	   using namespace GUI; -> all names from namespace GUI can be used in the current scope without qualification.


		using namespace std;
	at the very beginning, so we could refer to names from std without qualifications — here qualification is needed. Generally, the standard C++ library declares all names in namespace std (except for operator new, operator delete and preprocessor macros).

		#include <string.h>
	is equivalent to
	   #include <cstring>

	   but in the first case all names declared in the header are accessible without qualification, while the second form puts all these names into namespace std.
*/

#include "pch.h"
#include <iostream>

namespace A {
	const int two = 2;
	const int six = 6;
	void write() { std::cout << "ns-A" << " "; }
}

namespace B {
	void write() { std::cout << "ns-B" << " "; }
}

namespace C {
	const int two = 22;
	const int six = 66;
}

int main() {
	using A::write;
	using namespace C;

	write();
	B::write();
	std::cout << six << std::endl;
}