// Project54.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;

int counter; // global variable which is incremented every time the flow of control enters the function fib.

int fib(int n) {
	counter++;
	return (n < 2) ? n : fib(n - 1) + fib(n - 2);
}

int main()
{
	cout << "\n  i    Fib(i)    # of calls\n"
		"---------------------------" << endl;
	for (int i = 10; i <= 43; i += 3) {
		counter = 0;
		int w = fib(i);
		cout << setw(3) << i << setw(12) << w
			<< setw(12) << counter << endl;
	}
}
