// Project37.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Using a Label
// Expression Statement

#include "pch.h"
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int tab[2][2][2]{ {{1,2},{3,4}},{{9,6},{7,8}} };
	bool present = false;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				if (tab[i][j][k] == 5) {
					present = true;
					goto LAB;
				}
			}
		}
	}
    
	LAB:if (present) {
		cout << "5 is present in the array" << endl;
		}
		else {
			cout << "there is no 5 in the array" << endl;
		}

	// expression statement.

		int r = 7, m = 8;
		++r;
		r + 1;
		r = 5;
		printf("OK?");
		r > m ? ++r : --m;
		cout << m << endl;
		new double(3.5);

}

