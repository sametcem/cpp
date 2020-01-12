
#include "pch.h"
#include <iostream>
using namespace std;
// ARA NOT: The return statement terminates the execution of the function it was encountered in.
int main() {
	const int st_size = 5;

	char grades[][st_size] = { { 'A', 'A', 'B', 'C', 'B' },
							  { 'A', 'C', 'C', 'F', 'D' },
							  { 'A', 'C', 'B', 'B', 'A' } };

	int gr_size = sizeof(grades) / sizeof(grades[0]);

	bool isF = false;

	for (int group = 0; group < gr_size; group++)
		for (int student = 0; student < st_size; student++)
			if (grades[group][student] == 'F') {
				isF = true;
				goto THEEND;
			}
THEEND:
	if (isF) cout << "There was an \'F\'" << endl;
	else     cout << "There was no \'F\'" << endl;
}


// EXCEPTION HANDLING NOTE:
/*
-Try statement which declares a portion of the code as possible source of exceptions;
-Catch statement which defines a block of code where exeptions are handled;
-Throw statement which permits the user to throw exceptions „by hand”.
*/