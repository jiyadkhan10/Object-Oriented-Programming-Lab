#include "Course.h"
#include "Instructor.cpp"
#include "TextBook.cpp"

using namespace std;

Course::Course(string course, string last_name, string first_name, string office, string textTitle, string author, string publisher)
{
	instructor.set(last_name, first_name, office);
	textbook.set(textTitle, author, publisher);
	courseName = course;
}

void Course::print() const
{
	instructor.print();
	textbook.print();
	
	cout << endl;
	
	cout << "************ Course Information ************ " << endl;
	
	cout << endl;
	
	cout << "Course Name: " <<courseName << endl;
}

Course::~Course()
{
	cout << endl;
	
	cout << "Destructor for Course." << endl;
}

Course::Course(const Course &other)
{
	courseName = " ";
	instructor = other.instructor;
	textbook = other.textbook;
}
