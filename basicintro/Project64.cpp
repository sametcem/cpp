// Project64.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <typeinfo>
using namespace std;

// return type may be deduced when T and U are known
template<typename T, typename U>
decltype(auto) mul(T x, U y) {
	return x * y;
}

int main() {
	auto r1 = mul(2.0, 7); // double*int -> double
	std::cout << r1 << " :: " << typeid(r1).name() << "\n";
	auto r2 = mul(2, 7L);  //   int*long -> long
	std::cout << r2 << " :: " << typeid(r2).name() << "\n";
}

/*

Let us illustrate one more syntactic „trick” that can be useful when defining templates
of functions. Starting from C++14 version of the standard, we can make the compiler 
"fully responsible for determining the return type of a function." We just declare the return type as decltype(auto) — 
compiler will then infer the correct type by analyzing the body of the function and looking at all return statements.

*/