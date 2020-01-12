// intfilout-36.cpp : This file contains the 'main' function. Program execution begins and ends there.
//INTERNAL FILES

/*
It is possible to define a „file” which does not exist on a disk, 
but corresponds to a region of memory to which and from which data can be transferred, 
exactly as to/from a disk file. Such „files” are called internal files. Technically, 
the rôle of an internal file can be played by C-strings (arrays of characters) or by objects of class string, specific to C++.

*/

#include "pch.h"
#include <iostream>
#include <strstream>
#include <cstdlib>   // free
using namespace std;

int main() {
	// "rubber" version
	ostrstream napis1;
	napis1 << "Beginning, " << "continuation, "
		<< "end." << ends;
	char* n = napis1.str();
	cout << "The string is: " << n << endl;
	free(n);

	// version with array
	char tab[30];
	ostrstream napis2(tab, sizeof(tab));
	napis2 << "Maggie " << "Kathy " << "Mary" << ends;
	cout << tab << endl;
}