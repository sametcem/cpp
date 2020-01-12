// Project6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Foo.h"
#include "Goo.h"
#include "add2.h" // import BasicMath::add()
#include "subtract.h" // import BasicMath::subtract()
#include <iostream>

int main()
{
	std::cout << BasicMath::add(4, 3) << '\n';
	std::cout << BasicMath::subtract(4, 3) << '\n';

	std::cout << Foo::doSomething(4, 3) << '\n';
	std::cout << Goo::doSomething(4, 3) << '\n';
	return 0;
}

