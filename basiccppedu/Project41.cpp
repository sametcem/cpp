// Project41.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	const int numOfStudents = 5;
	int scores[numOfStudents] = { 65,87,78,32,67 };

	int maxScore = 0;
	for (int student = 0; student < numOfStudents; student++) {
		if (scores[student] > maxScore) {
			maxScore = scores[student];
		}
	}

	std::cout << "The best score has " << maxScore << std::endl;

	for (const auto &score : scores) // iterate over array scores, assigning each value in turn to variable score
		if (score > maxScore)
			maxScore = score;

	std::cout << "The best score was " << maxScore << '\n';


	//For each loop in C++
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	for (int number : fibonacci) // iterate over array fibonacci
		std::cout << number << ' '; // we access the array element for this iteration through variable number
}
