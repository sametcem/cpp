
/*
Static variables are created only once and initialized with zero of an appropriate type.
If it is declared locally, it is created when the flow of control encounters the declaration for
the first time. It will exist until termination of the program.
It follows, that this is a kind of data which persists between function calls:
when the flow of control reenters a function, the values of static variables declared
in this function will have the values that they had when the function was called previously,
as physically they are still the same variables. They exist between function calls, but,
as they are declared locally in a function, they are not visible outside of these functions.
*/

#include "pch.h"
#include <iostream>
using namespace std;

int counter;

void fun1() {
	static int counter;
	counter++;    // local
	::counter++;  // global
	cout << "Call count   fun1: " << counter << endl;
}

void fun2() {
	static int counter;
	counter++;    // local
	::counter++;  // global
	cout << "Call count   fun2: " << counter << endl;
}

int main() {
	fun1(); fun1(); fun2(); fun1(); fun2();
	cout << "Call count fun1/2: " << counter << endl;
}