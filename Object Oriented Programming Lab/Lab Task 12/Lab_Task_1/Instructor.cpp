#include "Instructor.h"
#include <iostream>
using namespace std;

Instructor::Instructor()
{
	lastName = " ";
	firstName = " "; 
	officeNumber = "";
}

Instructor::~Instructor()
{
	cout << endl;
	
	cout << "Destructor for Instructor." << endl;
}


Instructor::Instructor(const Instructor &other)
{
	lastName = other.lastName;
	firstName = other.firstName;
	officeNumber = other.officeNumber;
}

void Instructor::set(string l, string f, string o)
{
	lastName = l;
	firstName = f;
	officeNumber = o;
}

void Instructor::print() const
{
	cout << "************ Instructor Information ************" << endl;
	
	cout << endl;
	
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Office Number: " << officeNumber << endl;
}
