// Project35.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CONSTEXPR 
/*
 instead of using const, we use the keyword constexpr. 
 It means that it must be possible for the compiler 
 to calculate the initializing value (of integer, floating point, object type.) 
 This value can depend on values of literals, but also on values of other variables 
 if they are also declared as constexpr. 
 Compiler will check if this is the case and report an error if it is not. 
 */

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	constexpr int hourfee = 7;
	constexpr int tim = 5;

	int arr[10 + (tim - 1)*hourfee]; //is a compile-time constant which is really evaluated at compile time 

	cout << "number of elements in arr "
		<< sizeof(arr) / sizeof(arr[0]) << endl;

	//THE expression used to specify the dimension of an array...
}