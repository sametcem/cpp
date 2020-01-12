// hierob-79.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class A { };
class B : public A { };

int main() {
	try {
		throw B();
	}
	catch (A) { cout << "A" << endl; }
	catch (B) { cout << "B" << endl; }
}