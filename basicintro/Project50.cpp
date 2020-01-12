// Project50.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Reference arguments 

#include "pch.h"
#include <iostream>
using namespace std;
/*
void fun(int& k) { //-> this means that an argument of type int will be passed by reference.
	k = k + 2;
}
*/

void fun(int, int&, int*);
void fun2(int);
void fun3(int&);

int main()
{
	int a = 1, b = 2, c = 3;

	cout << "Before: a = " << a << " b = " << b
		<< " c = " << c << endl;
	fun(a, b, &c);

	cout << "After : a = " << a << " b = " << b
		<< " c = " << c << endl;

	int t = 3;
	fun2(t);
	cout << t << endl;

	fun3(t);
	cout << t << endl;

}

void fun(int x, int& y, int* z) {
	x = 2 * x;
	y = 3 * y;
	*z = 4 * (*z);
}

void fun2(int r) {
	r = 2*r;
}

void fun3(int& s) {
	s = s * 5;
}

/*
The first argument is passed by value. Therefore, 
the variable x in the function will be a local variable initialized with the value of a.
The function modifies x, but this will not influence the value of a from the main function.

The second argument, b, is passed by reference (the second parameter was declared as int&). 
This means, that during this particular invocation of the function fun, the variable ***y will 
be just another name of b from main***. Any modification of y inside the function will be then equivalent 
to changing the value of b from main. 

The third argument is passed by pointer — the type of the parameter is int*.
As the function expects the address of an int, what we pass is not c as such, but rather
its address, i.e., &c. In the function,** z is a local variable of pointer type, but initialized with the address of c. **
Therefore, z from the function points to c from the main; consequently, *z denotes the int variable pointed to by z, i.e., c. 
Any modification of *z is a modification of c, what can be seen from the output:

*/
