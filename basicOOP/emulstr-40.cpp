// emulstr-40.cpp : This file contains the 'main' function. Program execution begins and ends there.
// An implementation of some string functions 

#include "pch.h"
#include <iostream>

char* Strcpy(char* target, const char* source) {
	char* t = target;
	while (*t++ = *source++);
	return target;
}

char* Strcat(char* target, const char* source) {
	char* t = target - 1;
	while (*++t);
	while (*t++ = *source++);
	return target;
}

char* Strncat(char* target, const char* source, int n) {
	char* t = target - 1;
	while (*++t);
	while ((*t++ = *source++) && n--);
	*(t - 1) = '\0';
	return target;
}

int Strlen(const char* source) {
	const char* s = source;
	while (*s++);
	return s - source - 1;
}

char* Strchr(const char* target, int c) {
	while (*target && *target++ != c);
	return (char*)(*--target ? target : 0);
}

int main()
{
    std::cout << "Hello World!\n"; 
}

