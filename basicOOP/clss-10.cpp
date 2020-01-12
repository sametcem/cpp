// clss-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
Definitions of classes in C++ can start with the keywords class or struct. 
The only difference is the default accessibility level: if class has been used, 
then the default is private; if struct has been used, then the default is public.
*/

#include "pch.h"
#include <iostream>
using namespace std;

class Greeting {
	int k1; // automatically private
public:
	enum Country{PL,DE,FR};
	int k2;
	void fun(Country country) {
		switch (country)
		{
		case Greeting::PL:
			cout << "Dzien dobry\n"; k1 = 1; break;
		case Greeting::DE:
			cout << "Guten Tag\n";   k1 = 2; break;
		case Greeting::FR:
			cout << "Bonjour\n";     k1 = 3; break;
		default:
			break;
		}
	}

};

int main()
{
	Greeting dd;
	dd.fun(Greeting::DE);
	int *pk1 = &dd.k2 - 1;

	cout << "sizeof(dd) = " << sizeof(dd) << endl;
	cout << "dd.k1      = " << *pk1 << endl;


	/*
	we take the address of the member k2, what is possible, because it is public. 
	We substract 1 from it, what, according to pointer arithmetic, 
	shoud give us the address of an integer preceding dd.k2 inside the object, i.e., the private member dd.k1.
	Having the address, we can print the value of this integer , it is 2, as expected.


	Thus we see that protecting data by declaring it as private does not mean that this data is shielded from the „outside world”. 
	It only protects the name under which data can be accessed.
	
	*/
}

