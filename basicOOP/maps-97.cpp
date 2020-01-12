// maps-97.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <iomanip>   // left, setw
#include <list>
#include <string> 
#include <map>
#include <vector>
#include <utility> // pair
#include <algorithm>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
#include <functional>

using namespace std;

typedef pair<string, int> Emp;
typedef map<string, Emp>  MAP;

class Range {
	int min, max;
public:
	Range(int min, int max) : min(min), max(max) {}

	bool operator()(const pair<const string, Emp>& p) const {
		int salary = p.second.second; // Emp-> int 
		return  (min < salary) && (salary < max);
	}
};

bool comp(const Emp& p1, const Emp& p2) {
	return p1.second < p2.second;
}

/*
void sorting(const MAP& m) {

	MAP::const_iterator it, fin = m.end();
	vector<Emp> vec;

	for (it = m.begin(); it != fin; it++) {
		vec.push_back(it->second);
	}

	sort(vec.begin(), vec.end(), comp);


	for (it = m.begin(); it != fin; it++)
		cout << "Key: " << left << setw(7) << it->first
		<< "Name: " << setw(10) << it->second.first
		<< "Salary: " << it->second.second << endl;
	
	/*
	  // Vector printing
	copy(vec.begin(), vec.end(),
		ostream_iterator<Emp>(cout, " "));
	cout << endl;
	

}
*/

void print(const MAP& m) {
	MAP::const_iterator it, fin = m.end();

	for (it = m.begin(); it != fin; it++)
		cout << "Key: " << left << setw(7) << it->first
		<< "Name: " << setw(10) << it->second.first
		<< "Salary: " << it->second.second << endl;
}


int main()
{
	MAP emp;

	emp["sue"] = Emp("Sue K.", 1900);
	emp["jill"] = Emp("Jill M.", 2100);
	emp["eve"] = Emp("Eve S.", 3100);
	emp["boss"] = Emp("Boss", 9900);
	emp["jane"] = Emp("Jane A.", 1600);
	emp["emily"] = Emp("Emily P.", 2600);

	print(emp);
	cout << " " << endl;


	int mn = 0, mx = 2000;
	int cnt = count_if(emp.begin(), emp.end(), Range(mn, mx));

	cout << cnt << " employees have salary in range "
		<< mn << " to " << mx << endl;
	
	cout << endl;

	typedef std::function<bool(std::pair<std::string, Emp>, std::pair<std::string, Emp>)> Comparator;

	Comparator compFunctor =
		[](std::pair<std::string, Emp> elem1, std::pair<std::string, Emp> elem2)
	{
		return elem1.second.second < elem2.second.second;
	};

	Comparator compFunctorDesc =
		[](std::pair<std::string, Emp> elem1, std::pair<std::string, Emp> elem2)
	{
		return elem1.second.second > elem2.second.second;
	};

	std::set<std::pair<std::string, Emp>, Comparator> setOfWords(
		emp.begin(), emp.end(), compFunctor);

	for (std::pair<std::string, Emp> element : setOfWords)
		std::cout << "Key: " << element.first << " Name: " << element.second.first << "Salary:" << element.second.second << std::endl;

	cout << endl;

	std::set<std::pair<std::string, Emp>, Comparator> setOfWords2(
		emp.begin(), emp.end(), compFunctorDesc);

	for (std::pair<std::string, Emp> element : setOfWords2)
		std::cout << "Key: " << element.first << " Name: " << element.second.first << "Salary:" << element.second.second << std::endl;


	return 0;
}
