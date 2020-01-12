// prgr-99.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Dynamic Cast


/*

To illustrate the second possibility, we could have defined the function total in the following way:

	  1.      int total(Program* prgs[], int size) {
	  2.          int tot = 0;
	  3.          for (int i = 0; i < size; ++i) {
	  4.              prgs[i]->print();
	  5.              try {
	  6.                  Shareware& sh =
	  7.                      dynamic_cast<Shareware&>(*prgs[i]);
	  8.                  tot += sh.getPrice();
	  9.              } catch(bad_cast) { }
	 10.          }
	 11.          return tot;





*/


#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Program {
protected:
	string name;
public:
	Program(string n)
		: name(n)
	{ }
	virtual void print() = 0;
	virtual ~Program() { };
};

class Freeware : public Program {
public:
	Freeware(string n)
		: Program(n)
	{ }
	void print() {
		cout << "Free : " << name << endl;
	}
};

class Shareware : public Program {
	int price;
public:
	Shareware(string n, int c)
		: Program(n), price(c)
	{ }
	void print() {
		cout << "Share: " << name
			<< ", price " << price << endl;
	}
	int getPrice() {
		return price;
	}
};

int total(Program* prgs[], int size) {
	Shareware* sh;
	int tot = 0;
	for (int i = 0; i < size; ++i) {
		prgs[i]->print();
		if (sh = dynamic_cast<Shareware*>(prgs[i]))
			tot += sh->getPrice();
	}
	return tot;
}

int main() {
	Freeware anjuta("Anjuta"); Shareware wz("WinZip", 30);
	Freeware mysql("MySQL");   Shareware rar("RAR", 25);

	Program* prgs[] = { &anjuta, &wz, &mysql, &rar };

	int tot = total(prgs, sizeof(prgs) / sizeof(prgs[0]));

	cout << "\nTotal: $" << tot << endl;
}