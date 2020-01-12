// Project68.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Reference to a variable on the heap

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double *pd = new double(4.5),
	&rd = *pd;

	cout << "pd " << pd << endl;
	cout << "*pd = " << *pd << endl;
	cout << "&rd = " << &rd << endl;
	cout << "rd = " << rd << endl;

	*pd = 1.5;

	cout << "pd " << pd << endl;
	cout << "*pd = " << *pd << endl;
	cout << "&rd = " << &rd << endl;
	cout << "rd = " << rd << endl;

	delete pd;


    
}

