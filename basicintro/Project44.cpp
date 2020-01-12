// Project44.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int r = 0;
	int k;

	//the expression on the left is evaluated and the result is ignored;
	//the expression on the right is evaluated and the result becomes the value of the whole expression.
	while (cin >> k, k) {
		r += k > 0 ? (cout << "Positive\n", +1) : (cout << "Negative\n", -1);
	}

	cout << "Number of positive - Number of negative : " << r << endl;
  
}

