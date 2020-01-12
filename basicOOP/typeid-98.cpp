// typeid-98.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
typeid


The typeid operator (from header typeinfo) takes as the argument the name of a type or just 
a value of a certain type. It returns an object of class type_info representing a type. In this class, 
' ==' and ' !=' operators are overloaded providing a possibility of comparing types of objects.

 #include <typeinfo>
	   // ...
	   double x = 1.5;
	   // ...
	   if (typeid(x) == typeid(double)) ... // true
	   if (typeid(x) == typeid(36.0))   ... // true
	   if (typeid(x) == typeid(3))      ... // false
	   if (typeid(x) != typeid(3))      ... // true
	   if (typeid(x) != typeid(int))    ... // true


*/

#include "pch.h"
#include <iostream>
#include <typeinfo>
using namespace std;

struct Vehicle { };
struct Car : Vehicle { };

struct Building {
	virtual ~Building() { }
};
struct Station : Building { };



int main() {
	Vehicle    veh;
	Car  car1, car2;
	Car* p_car1 = &car1;
	Vehicle*   p_car2 = &car2;
	Vehicle&   r_car1 = car1;
	cout << "    veh: " << typeid(veh).name() << endl
		<< "   car1: " << typeid(car1).name() << endl
		<< "   car2: " << typeid(car2).name() << endl
		<< " p_car1: " << typeid(p_car1).name() << endl
		<< " p_car2: " << typeid(p_car2).name() << endl
		<< "*p_car1: " << typeid(*p_car1).name() << endl
		<< "*p_car2: " << typeid(*p_car2).name() << endl
		<< " r_car1: " << typeid(r_car1).name() << endl;

	cout << "Types *p_car1 and *p_car2 are "
		<< (typeid(*p_car1) == typeid(*p_car2) ?
			"the same\n" : "different\n") << endl;

	Building  build;
	Station   sta1, sta2;
	Station*  p_sta1 = &sta1;
	Building* p_sta2 = &sta2;
	Building& r_sta1 = sta1;
	cout << "  build: " << typeid(build).name() << endl
		<< "   sta1: " << typeid(sta1).name() << endl
		<< "   sta2: " << typeid(sta2).name() << endl
		<< " p_sta1: " << typeid(p_sta1).name() << endl
		<< " p_sta2: " << typeid(p_sta2).name() << endl
		<< "*p_sta1: " << typeid(*p_sta1).name() << endl
		<< "*p_sta2: " << typeid(*p_sta2).name() << endl
		<< " r_sta1: " << typeid(r_sta1).name() << endl;

	cout << "Types *p_sta1 and *p_sta2 are "
		<< (typeid(*p_sta1) == typeid(*p_sta2) ?
			"the same\n" : "different\n");
}