// Project14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	double x = 3, &y = x, *z = &x;
	y = 4;
	// y degeri x icin sadece bir alias, y icin 4 atand�g�nda x degeri otomatik olarak 4 olur. z pointer� xi adresliyor,o y�zden 4.
	// &y adresi verir, y degeri verir. *p degeri verir, p memory adressi verir.
	cout << *z << endl;

	return 0;
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
