// cstrings-38.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
A C-string is just an array of characters; the only requirement is that it should end with a NUL character  ' \0' 
-
a C-string of type char* initialized with a string literal (enclosed in double quotation marks) is unmodifiable.
-
char* strcat(char* dest, const char* src) —  appends string src to dest (concatenation); returns dest.
-
char* strncat(char* dest, const char* src, size_t n) —  is similar to the previous function, but copies at most n characters of src
-
char* strcpy(char* dest, const char* src) —  copies characters from the segment of memory starting at address pointed to by src to the segment pointed to by dest.
-
char* strncpy(char* dest, const char* src, size_t n) —  copies exactly n characters from location starting at the address pointed to by src to the one pointed to by dest.
-
int strcmp(const char* s1, const char* s2) —  compares lexicographically (in dictionary order) two strings. Returns -1, if s1 is less (earlier in dictionary order) than s2, +1, if s2 is less, and 0 if they are equal.

*/

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

void  first_last(const char**, const char*&,const char*&);

int main() {

	const char *nam[] = { "Cathy",     "Maggi",
					"Alice",     "Wanda",
					"Wendy", "Catharina", "" },
		*p, *q;

	first_last(nam, p, q);

	cout << "First: " << p << endl
		<< "Last : " << q << endl;
}

void first_last(const char** s,const char*& p,const char*& q) {
	p = q = *s;
	while (**++s) {
		if (strcmp(*s, p) < 0) p = *s;
		if (strcmp(*s, q) > 0) q = *s;
	}
}