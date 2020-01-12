// Project23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iterator> // for std::size

int main()
{
	int scores[] = { 84, 92, 76, 81, 56 };
	const int numStudents = std::size(scores); // requires C++17 and <iterator> header
//  const int numStudents = sizeof(scores) / sizeof(scores[0]); // use this instead if not C++17 capable

	int maxScore = 0; // keep track of our largest score
	for (int student = 0; student < numStudents; ++student)
		if (scores[student] > maxScore)
			maxScore = scores[student];

	std::cout << "The best score was " << maxScore << '\n';

		// with INDEX

	int maxIndex = 0; // keep track of index of our largest score
	// now look for a larger score
	for (int students = 1; students < numStudents; ++students)
		if (scores[students] > scores[maxIndex])
			maxIndex = students;

	std::cout << "The best score was " << scores[maxIndex] << '\n';

	return 0;
}
