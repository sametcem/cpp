// tok-39.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
char* strtok(char* str, const char* set) —  This is a „tokenizer”, 
i.e., a function performing decomposition of a given string into words („tokens”) which are separated one from another 
by characters from a set set (which is to be understood as a set of separators, e.g., space, comma, colon etc.).


*/

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char strin[] = "int* fun(char& c,double** wtab);";
	char separ[] = ")(,;";
	char* token;

	token = strtok(strin, separ);
	while (token != 0) {
		cout << token << endl;
		token = strtok(0, separ);
	}

}
/*
will print in successive lines
int* fun
char& c
double** wtab

*/
