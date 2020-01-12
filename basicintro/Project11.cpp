// Project11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Sometimes we need a pointer which point to certain location in the computer's memory but without
specifying the type of data stored at this address. Such pointers exist; 
they are called generic pointers. We declare them as being of type void*.

+Generic pointers cannot be dereferenced.
*/

#include "pch.h"
#include <iostream>

int main()
{
	int k = 8, *pk = &k, *p, *q;
	void *pv = pk; //The variable pv has type void*: it holds an address, but it does not know of what.
	p = static_cast<int*>(pv); //We do it by casting the value of our pointer onto another type:
	q = (int*)pv;

	/*
	In our example, we copy the casted value of the generic pointer pv to both p and q,
	so they contain the same address as pv, but as they are of type int* they can be dereferenced.
	*/


}

