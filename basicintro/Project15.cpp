// Project15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Length -> sizeof(tab) / sizeof(int) 400/4 = 100
or
sizeof(tab) / sizeof(tab[0])
*/


#include "pch.h"
#include <iostream>

void fun1(double t[]) {
	std::cout << "Size of \'t\' in fun1: " << sizeof(t) << std::endl;
	std::cout << "Value of *t in fun1: " << t[0] << std::endl;
}

void fun2(double* t) {
	std::cout << "Size of \'t\' in fun2: " << sizeof(t) << std::endl;
	std::cout << "Value of *t in fun2: " << t[0] << std::endl;
}

int main() {
	double t[] = {6,2,3,2,1};
	std::cout << "Size of \'t\' in main: " << sizeof(t) << std::endl;
	std::cout << "Value of *t in main: " << *t << std::endl;
	fun1(t);
	fun2(t);
}
