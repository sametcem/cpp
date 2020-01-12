// opplowe-41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//isalpha —  is (char)c a letter?

#include "pch.h"
#include <iostream>
#include <cctype>
using namespace std;

int uplow(char* s) {
	int cnt = 0;
	do {
		if (isalpha(*s))
			if (cnt == 0 || !isalpha(*(s - 1))) {
				*s = (char)toupper(*s);
				cnt++;
			}
			else
				*s = (char)tolower(*s);
	} while (*s++);
	return cnt;
}

int main() {
	char strn[] = "thiS Is lonG,lONG StRiNg!";

	int c = uplow(strn);
	cout << c << " words, string = \'" << strn << "\'\n";
}