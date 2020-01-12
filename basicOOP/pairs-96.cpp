// pairs-96.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
Lines 24-26 define aliases for names of types which are then used in the program.
The name PAIR is a synonym of the name of the type which is concretized from template pair with 
string as the type of the member "first" and int as the type of the member "second". 
Hence, the „true” name of this type is pair<string,int>. The name VECT (line 25)
is an alias of type created by concretization of template vector with pair<string,int> (i.e., PAIR) as the type of its elements. 
Without typedef s we would have to use a rather awkward name vector<pair<string,int> >.


*/

#include "pch.h"
#include <fstream>
#include <string>
#include <utility>   // pair
#include <vector>
#include <algorithm> // copy, sort, etc.
#include <iostream>
using namespace std;

typedef pair<string, int> PAIR;
typedef vector<PAIR>     VECT;
typedef VECT::iterator   VECTIT;

template <typename P>
class Minor {
	int age;
public:
	Minor(int age) : age(age) { }

	bool operator()(const P& p) const {
		return p.second < age;
	}
};


template <typename P1, typename P2>
ostream& operator<<(ostream& str, const pair<P1, P2>& p) {
	return str << "[" << p.first << "," << p.second << "]";
}

template <typename P1, typename P2>
istream& operator>>(istream& str, pair<P1, P2>& p) {
	return str >> p.first >> p.second;
}

template <typename P>
bool comp(const P& p1, const P& p2) {
	return p1.second < p2.second;
}

int main() {
	ifstream file("pairs.txt");

	PAIR   p;
	VECT vec;
	VECTIT it, fin;

	while (file >> p) vec.push_back(p); // pushing into vector.

	cout << "After reading:\n";
	fin = vec.end();
	for (it = vec.begin(); it != fin; ++it)
		cout << *it << " ";

	cout << "\nOldest "
		<< *max_element(vec.begin(), vec.end(), comp<PAIR>)
		<< ", youngest "
		<< *min_element(vec.begin(), vec.end(), comp<PAIR>);

	it = remove_if(vec.begin(), fin,
		Minor<PAIR>(18)); // bool operator
	vec.erase(it, vec.end());

	//Actually, the function remove_if does not remove anything. It merely relocates „unwanted” elements towards the end of the collection,
	//so when the function exits, all „wanted” elements are before all „unwanted” ones


	cout << "\nAfter removing minors:\n";
	fin = vec.end();
	for (it = vec.begin(); it != fin; ++it)
		cout << *it << " ";

	sort(vec.begin(), fin, comp<PAIR>);

	cout << "\nAfter sorting:\n";
	fin = vec.end();
	for (it = vec.begin(); it != fin; ++it)
		cout << *it << " ";

	cout << endl;
}