// hier-78.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*

There can be more than one catch phrases following any try block. 
If this is the case, and if an exception has been thrown in the try clause, 
then the correct catch will be looked for sequentially, one by one, 
until the type of exception matches the type declared in the header of a  catch block.

*/

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	try {
		throw 7.;
	}
	catch (double) { cout << "double" << endl; }
	catch (int) { cout << "int   " << endl; }
}