#include "pch.h"
#include <iostream>

void doSomething()
{
#ifdef PRINT
	std::cout << "Printing!";
#endif
#ifndef PRINT
	std::cout << "Not printing!";
#endif
}