// bitfields-21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Font {
	unsigned  face : 3;
	unsigned weight : 1;
	unsigned color : 2;
public:
	enum Face {
		HELVETICA, TIMES, ARIAL,
		COURIER, BOOKMAN, SYMBOL
	};
	enum Weight { NORMAL, BOLD };
	enum Color { BLACK, RED, GREEN, BLUE };

	Font(Face face, Weight weight, Color color) {
		this->face = face;
		this->weight = weight;
		this->color = color;
	}

	void describe() {
		cout << "Face # " << face << "; weight # "
			<< weight << "; color # " << color << endl;
	}
};

int main() {
	Font title(Font::ARIAL, Font::BOLD, Font::RED);
	Font text(Font::TIMES, Font::NORMAL, Font::BLACK);
	Font symb(Font::SYMBOL, Font::BOLD, Font::BLUE);
	title.describe();
	text.describe();
	symb.describe();
	cout << "Size of object: " << sizeof(Font) << endl;
}