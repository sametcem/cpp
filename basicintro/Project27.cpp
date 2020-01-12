
#include "pch.h"
#include <iostream>
using namespace std;


/*
there is a mechanism which allows us to give them a short, easy to remember name (an alias). 
This can be achieved with the help of the typedef keyword.77

CH1 is an alias for the type three-element array of characters;
CH2 stands for two-element array of three-element arrays of characters;
CH3 is the name of the type two-element array of two-element arrays of three-element arrays of characters.
*/
int main()
{
	typedef char CH1[3];
	typedef CH1 CH2[2];
	typedef CH2 CH3[2];

	CH1 ch1 = { 'a','b','c' };

	CH2 ch2 = { {'a','b','c'},{'d','e','f'} };

	CH3 ch3 = {
				  {{'a','b','c'},{'d','e','f'}},
				  {{'g','h','i'},{'j','k','l'}},
	};

	cout << "sizeof(CH1)  = " << sizeof(CH1) << endl
		<< "sizeof(CH2)  = " << sizeof(CH2) << endl
		<< "sizeof(CH3)  = " << sizeof(CH3) << endl
		<< "ch1[2]       = " << ch1[2] << endl
		<< "ch2[1][1]    = " << ch2[1][1] << endl
		<< "ch3[1][0][2] = " << ch3[1][0][2] << endl;
}