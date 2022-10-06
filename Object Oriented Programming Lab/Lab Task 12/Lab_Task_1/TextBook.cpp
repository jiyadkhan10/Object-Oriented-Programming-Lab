#include "Instructor.h"
#include <iostream>

using namespace std;

TextBook::TextBook()
{
	title = " ";
	author = " ";
	publisher = " ";
}

TextBook::TextBook(string t, string a, string p)
{
	title = t;
	author = a;
	publisher = p;
}

void TextBook::set(string t, string a, string p)
{
	title = t;
	author = a;
	publisher = p;
}

void TextBook::print() const
{
	cout << endl;
	
	cout << "************ Text Book Information ************" << endl;
	
	cout << endl;
	
	cout << "Title : " << title << endl;
	cout << "Author: " << author << endl;
	cout << "Publisher: " << publisher << endl;
}

TextBook::~TextBook()
{
	cout << endl;
	
	cout << "Destructor for Text book." << endl;
}

TextBook::TextBook(const TextBook &other)
{
	title = other.title;
	author = other.author;
	publisher = other.publisher;
}
