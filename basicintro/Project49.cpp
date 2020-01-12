// Project49.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
va_list -> variable-argument list,this variable is named ap(from argument pointer)
va_start
va_arg ->
its first argument is ap, and the second one is the name of the type of the argument 
to be read from the stack. Hence we have to know this type in advance! Usually,
information on the number and types of arguments is somehow coded in the first, 
obligatory argument. Each invocation of the function va_arg returns the value of the next argument and
advances the internal argument pointer (ap) to the next argument.
When all arguments have been read, function (macro) va_end must be called (once).
*/

#include "pch.h"
#include <iostream>
#include <cstdarg>
using namespace std;

void types(const char typ[] ...);

int main() {
	types("SxS", "John", 0, "Mary");
	types("issD", 17, "John", "Mary", 1.);
	types("iDdsiI", 17, 19.5, 1.5, "OK", -1, 8);
}

void types(const char typ[] ...) {
	int     i = 0, integ;
	char    c, *strin;
	double  doubl;

	va_list ap;

	va_start(ap, typ);

	while ((c = typ[i++]) != '\0') {
		switch (c) {
		case 'i':
		case 'I':
			integ = va_arg(ap, int);
			cout << "An int  : " << integ << endl;
			break;
		case 'd':
		case 'D':
			doubl = va_arg(ap, double);
			cout << "A double: " << doubl << endl;
			break;
		case 's':
		case 'S':
			strin = va_arg(ap, char*);
			cout << "A string: " << strin << endl;
			break;
		default:
			cout << "Invalid typecode!!!" << endl;
			goto END;
		}
	}
END:
	cout << endl;

	va_end(ap);
}


