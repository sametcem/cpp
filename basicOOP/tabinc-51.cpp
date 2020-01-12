// tabinc-51.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstring>  // memcpy
using namespace std;


class Tablica {
	int size;
	int* tab;
public:
	Tablica(int size, const int* t)
		: size(size),
		tab((int*)memcpy(new int[size], t,
			size * sizeof(int))) //how arrays are copied in constructors
	{ }

	Tablica(const Tablica& t)
		: size(t.size),
		tab((int*)memcpy(new int[size], t.tab, ////how arrays are copied in constructors
			size * sizeof(int)))
	{ }

	~Tablica() { delete[] tab; }

	Tablica& operator++();
	Tablica operator++(int);
	void showTab(const char* nap);
};

Tablica& Tablica::operator++() {
	for (int i = 0; i < size; ++i)
		++tab[i];
	return *this;
}

Tablica Tablica::operator++(int) {
	Tablica t(*this);
	++*this;
	return t;
}

void Tablica::showTab(const char* nap) {
	cout << nap;
	for (int i = 0; i < size; i++)
		cout << tab[i] << " ";
	cout << endl;
}

int main()
{
	int tab[] = { 1,2,3,4 };

	Tablica T(4, tab);
	T.showTab("Tablica wyjsciowa T: ");
	Tablica t = ++T;
	t.showTab("  Po t = ++T t jest: ");
	T.showTab("           a T jest: ");

	Tablica S(4, tab);
	S.showTab("Tablica wyjsciowa S: ");
	Tablica s = S++;
	s.showTab("  Po s = S++ s jest: ");
	S.showTab("           a S jest: ");
}

