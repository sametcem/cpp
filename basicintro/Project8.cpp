// Project8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

enum days{mon, tue=0,wed=0,thu=0,fri=0,sat,sun};

void info(days day) {
	static string dayType[] = { "  weekday",
								" saturday", "  holiday" };
	int rate = 100 * (1 + day);

	cout << "Type of day:" << dayType[day] << ". "
		<< "The rate is: " << rate << " USD" << endl;
}

int main()
{
	info(mon);

	days day = sat;
	info(day);

	day = sun;
	info(day);

}
