// Project38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void g() {
	cout << '*';
}

void sw(int k) {
	cout << k << ": ";
	switch (k) {

	default: g();
	case  5: g(); g();
	case  3:
	case  2: break;
	case  1: g(); g(); g(); g();
	}
	cout << endl;
}
int main()
{
	sw(9);
	sw(5);
	sw(4);
	sw(3);
	sw(2);
	sw(1);
	sw(0);
}
