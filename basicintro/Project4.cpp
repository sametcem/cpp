// Project4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#define POL
//#define ENG
//#define FRA
#if   defined(POL) && defined(FRA)
#error Please define only one country
#elif !(defined(POL) || defined(FRA))
#error Please define a country
#endif

#ifdef POL
#define country "Poland"
#define capital "Warsaw"
#elif defined(FRA)
#define country "France"
#define capital "Paris"
#endif

#include <iostream>
using namespace std;

int main() {
	cout << capital << " is the capital of "
		<< country << "." << endl;
	return 0;
}

