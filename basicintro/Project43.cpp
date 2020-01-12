// Project43.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

typedef int ARRINT15[15];

void siz(ARRINT15 t1, ARRINT15& t2) {
	cout << "G. t1 in siz: " << sizeof t1 << endl;
	cout << "H. t2 in siz: " << sizeof t2 << endl;
}

int main()
{
	ARRINT15 arr1;
	int		arr2[15];
	int		*arr3 = arr2;

	if (typeid(arr1) == typeid(arr2))
		cout << "A. arr1 and arr2: same type" << endl;
	else
		cout << "A. arr1 and arr2: different type" << endl;

	if (typeid(arr2) == typeid(arr3))
		cout << "B. arr2 and arr3: same type" << endl;
	else
		cout << "B. arr2 and arr3: different type" << endl;

	cout << "C. ARRINT15 : " << sizeof(ARRINT15) << endl;
	cout << "D. arr1     : " << sizeof arr1 << endl;
	cout << "E. arr2     : " << sizeof(arr2) << endl;
	cout << "F. arr3     : " << sizeof arr3 << endl;
	siz(arr2, arr2);
}

