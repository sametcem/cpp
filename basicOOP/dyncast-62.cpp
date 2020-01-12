// dyncast-62.cpp : This file contains the 'main' function. Program execution begins and ends there.
// The Forced Cast has form

/*

	reinterpret_cast<Type>(expression)
It basically means that we do not want to check the legitimity of the conversion at all: neither at compile-time nor at run-time.

*/

#include "pch.h"
#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

class Person {
	char nam[30];
	int  age;
public:
	Person(const char* n, int a) : age(a) {
		strcpy(nam, n);
	}

	void info() {
		cout << nam << " (" << age << ")" << endl;
	}
};

//reinterpret_cast and C-like casting are equivalent in this context. 
int main() {
	const size_t size = sizeof(Person);

	Person john("John Brown", 40);
	Person mary("Mary Wiles", 26);

	ofstream out("person.ob");
	out.write(reinterpret_cast<char*>(&john), size); //we dump the objects on disk in binary format.
	out.write((char*)&mary, size);
	out.close();

	char* buff1 = new char[size];
	char* buff2 = new char[size];
	ifstream in("person.ob");
	in.read(buff1, size);
	in.read(buff2, size);
	in.close();

	Person* p1 = reinterpret_cast<Person*>(buff1);
	Person* p2 = (Person*)buff2;

	p1->info();
	p2->info();

	/*
	John Brown (40)
    Mary Wiles (26)
	*/

	delete[] buff1;
	delete[] buff2;
}