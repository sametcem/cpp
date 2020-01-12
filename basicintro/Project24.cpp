
#include "pch.h"
#include <iostream>
#include "string"
#include "vector"

int main()
{
	using std::vector; using std::cout;

	vector<int> v1{2, 1};  //curly braces 
	vector<int> v2(3, 1); // round parentheses
	v1.push_back(0);
	v2.push_back(1);
	cout << "v1: size = " << v1.size() << " -> ";
	for (const auto& e : v1) cout << e << " ";   // expected 2 1 0 
	cout << "\n";
	cout << "v2: size = " << v2.size() << " -> ";
	for (const auto& e : v2) cout << e << " "; // expected 4 times 1
	cout << "\n";

	vector<std::string> v3;
	// v3[0] = "A";  // WRONG!!      cannot be treated as an array there.
	v3.push_back("A");
	for (int i = 1; i < 5; ++i)
		v3.push_back(v3.at(i - 1) + char('A' + i));
	for (const auto& e : v3) cout << e << " ";
	cout << "\n";

	cout << "First: " << v3.front() << ", last : "
		<< v3.back() << "\n";
	while (v3.size() > 0) {
		cout << "Removing " << v3.back() << "\n";
		v3.pop_back();
	}
}

