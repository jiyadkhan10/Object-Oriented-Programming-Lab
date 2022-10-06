#include <iostream>
#include <cstring>

using namespace std;

struct Student
{
	int roll_number;
	int student_age;
	float student_marks;
	string student_name;
	
};

void Displaying_the_information(Student student)
{
	cout << "Displaying Information: " << endl;
	cout << "Student's Name:"  << student.student_name << endl;
	cout << "Student's Roll No:"  << student.roll_number << endl;
	cout << "Student's Age:"  << student.student_age << endl;
	cout << "Student's Marks:"  << student.student_marks << endl;
}

int main()
{
	Student student;
	
	cout << "Enter the Student's name: ";
	cin >> student.student_name;
	
	cout << "Enter the Student's roll number: ";
	cin >> student.roll_number;
	
	cout << "Enter the Student's age: ";
	cin >> student.student_age;
	
	cout << "Enter the Student's marks: ";
	cin >> student.student_marks;
	
	Displaying_the_information(student);
}
