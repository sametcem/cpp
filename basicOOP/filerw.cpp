// filerw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int tab[] = { 97, 105, 115, 255, 111 }, k;
	int size = sizeof(tab) / sizeof(tab[0]);

	cout << "Array of size: " << size << endl;
	for (int i = 0; i < size; ++i)
		cout << tab[i] << " ";
	cout << endl;

	//ios::out — permits insertion to a stream (writting);
	//binary — do not translate in any way the end of line character(s):
	ofstream file_out("file.dat", ios::out | ios::binary);
	if (!file_out) {
		cout << "Can\'t open file_out" << endl;
		return -1;
	}

	file_out.write((char*)tab, sizeof(tab));
	file_out.close();

	fstream file("file.dat", ios::in | ios::out | ios::binary);
	if (!file) {
		cout << "Can\'t open file" << endl;
		return -1;
	}

	//streampos tellg( ) —  returns current position for reading (the letter 'g' stands for 'get'). 
	//ostream& seekg(streamoff offset, ios::seek_dir pos) —  sets the read position offset bytes counting from position pos.

	file.seekg(0, ios::end);
	streamsize len = file.tellg();
	cout << "File has length " << len << " bytes\n";
	file.seekg(0);

	cout << "Bytes in file:" << endl;
	while ((k = file.get()) != EOF)
		cout << k << " ";
	cout << endl;

	file.clear(); // <-- NECESSARY !!!

	file.seekg(4);
	file.read((char*)&k, 4); // 4 byte -> 1 int
	cout << "Integer from position 4: " << k << endl;

	file.seekp(12); // four bytes representing the variable k are copied to the file erasing the previous content of four bytes, which represented the fourth number form the original array
	file.write((char*)&k, 4);

	file.seekg(0);
	cout << "Bytes in file now:" << endl;
	while ((k = file.get()) != EOF)
		cout << k << " ";
	cout << endl;

	file.close();


}

