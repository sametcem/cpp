// inhe-68.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;

public:
	Person()
		: name(strcpy(new char[14], "NameUnknown"))
	{
		cout << "Default Ctor Person: "
			<< name << endl;
	}

	Person(const char* n)
		: name(strcpy(new char[strlen(n) + 1], n))
	{
		cout << "Ctor char* Person: " << name << endl;
	}

	Person(const Person& os)
		: name(strcpy(new char[strlen(os.name) + 1],
			os.name))
	{
		cout << "Copy-Ctor Person: "
			<< name << endl;
	}

	Person& operator=(const Person& os) {
		if (this != &os) {
			delete[] name;
			name = strcpy(new char[strlen(os.name) + 1],
				os.name);
			cout << "Assignment Person: "
				<< name << endl;
		}
		return *this;
	}

	~Person() {
		cout << "Deleting Person: " << name << endl;
		delete[] name;
	}

	const char* getName() const { return name; }
};

class Eployee : public Person {
	char* position;
public:
	Eployee()
		: position(strcpy(new char[14], "PosUnknown"))
	{
		cout << "Default Ctor Eployee: "
			<< position << endl;
	}

	Eployee(const char* s, const char* n)
		: Person(n), position(strcpy(new char[strlen(s) + 1], s))
	{
		cout << "Ctor char* char* Eployee: "
			<< position << endl;
	}

	Eployee(const Eployee& empl)
		: Person(empl), position(strcpy(new
			char[strlen(empl.position) + 1], empl.position))
	{
		cout << "Copy-Ctor Eployee: "
			<< position << endl;
	}

	Eployee& operator=(const Eployee& empl) {
		if (this != &empl) {
			(Person&)(*this) = empl;
			delete[] position;
			position = strcpy(new
				char[strlen(empl.position) + 1],
				empl.position);
			cout << "Assignment Eployee: "
				<< position << endl;
		}
		return *this;
	}

	~Eployee() {
		cout << "Deleting Eployee: " << position << endl;
		delete[] position;
	}

	const char* getPosition() const { return position; }
};


int main()
{
	cout << "\nMain: Creating object nobody" << endl;
	Eployee nobody;
	cout << "Main: object nobody created: "
		<< nobody.getPosition() << " "
		<< nobody.getName() << endl;

	cout << "\nMain: Creating object brown" << endl;
	Eployee brown("Boss", "Brown");
	cout << "Main: object brown created: "
		<< brown.getPosition() << " "
		<< brown.getName() << endl;

	cout << "\nMain: Copying brown -> copy" << endl;
	Eployee copy(brown);
	cout << "Main: object copy created: "
		<< copy.getPosition() << " "
		<< copy.getName() << endl;

	cout << "\nMain: Assignment nobody = copy" << endl;
	nobody = copy;
	cout << "Main: nobody = copy assigned: "
		<< nobody.getPosition() << " "
		<< nobody.getName() << endl << endl;
}


/*
Main: Creating object nobody
	Default Ctor Person: NameUnknown
	Default Ctor Eployee: PosUnknown
	Main: object nobody created: PosUnknown NameUnknown

	Main: Creating object brown
	Ctor char* Person: Brown
	Ctor char* char* Eployee: Boss
	Main: object brown created: Boss Brown

	Main: Copying brown -> copy
	Copy-Ctor Person: Brown
	Copy-Ctor Eployee: Boss
	Main: object copy created: Boss Brown

	Main: Assignment nobody = copy
	Assignment Person: Brown
	Assignment Eployee: Boss
	Main: nobody = copy assigned: Boss Brown

	Deleting Eployee: Boss
	Deleting Person: Brown
	Deleting Eployee: Boss
	Deleting Person: Brown
	Deleting Eployee: Boss
	Deleting Person: Brown


*/