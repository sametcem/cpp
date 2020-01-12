
// Using Library Structures...

#include "pch.h"
#include <iostream>
#include <cmath>         // sin, cos
#include <sys/timeb.h>   // ftime
using namespace std;

int main() {
	timeb start, now;
	double res = 0;

	ftime(&start);

	for (int i = 0; i <= 90000000; ++i) {
		if (i % 10000000 == 0) {
			ftime(&now);
			time_t sec = now.time - start.time;
			int msec = now.millitm;
			msec -= start.millitm;
			if (msec < 0) {
				--sec;
				msec += 1000;
			}
			cout << "After " << i << " iterations: "
				<< sec << "s and " << msec << "ms\n";
		}
		res = cos(res + sin(i));
	}
	cout << "Useless result: " << res << endl;
}