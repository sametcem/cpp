// Project46.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <array>
#include <algorithm> // for std::sort

int main()
{
	std::array<int, 5> myArray{ 7, 3, 1, 9, 5 };
	std::sort(myArray.begin(), myArray.end()); // sort the array forwards
//    std::sort(myArray.rbegin(), myArray.rend()); // sort the array backwards

	for (const auto &element : myArray)
		std::cout << element << ' ' << std::endl;



	std::array<int, 5> myArray2{ 7, 3, 1, 9, 5 };

	for (std::array<int, 5>::size_type i{ 2 }; i < myArray2.size(); ++i) // std::array<int, 5>::size_type is the return type of size()!
		std::cout << myArray2[i] << ' '<< std::endl;



	std::array<int, 5> myArray3{ 7, 3, 1, 9, 5 };

	using index_t = std::array<int, 5>::size_type;
	for (index_t i{ 0 }; i < myArray3.size(); ++i)
		std::cout << myArray3[i] << ' '<< std::endl;



	std::array<int, 5> myArray4{4, 7, 3, 1, 9 };

	for (std::size_t i{ 3 }; i < myArray4.size(); ++i)
		std::cout << myArray4[i] << ' ';
	return 0;
}