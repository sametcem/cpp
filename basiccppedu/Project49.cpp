// Project49.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <utility>

struct Student
{
	std::string name;
	int grade;	
};

void sortNames(Student *students, int length) {
	for (int i = 0; i < length; i++) {
		int largestIndex = i;

		for (int currentIndex = i + 1; currentIndex < length; currentIndex++) {
			if (students[currentIndex].grade > students[largestIndex].grade) {
				largestIndex = currentIndex;
			}
		}
		std::swap(students[i], students[largestIndex]);
	}
}

int main()
{
	int numStudents = 0;

	do {
		std::cout << "How many students do you want to input?";
		std::cin >> numStudents;
	} while (numStudents <= 1);

	Student *studentList = new Student[numStudents];

	for (int index = 0; index < numStudents; index++) {
		std::cout << "Enter name #" << index + 1 << ": ";
		std::cin >> studentList[index].name;
		std::cout << "Enter grade #" << index + 1 << ": ";
		std::cin >> studentList[index].grade;
	}

	sortNames(studentList, numStudents);

	for (int index = 0; index < numStudents; ++index)
		std::cout << studentList[index].name << " got a grade of " << studentList[index].grade << "\n";

	// Don't forget to deallocate the memory
	delete[] studentList;

}

