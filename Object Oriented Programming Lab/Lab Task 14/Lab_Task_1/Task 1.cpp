#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	
  	string roll_number;
  	string first_name;
  	string last_name;
  	string department;
  	char section;

  	ofstream x;

  	x.open("Students.txt");

  	for(int i = 0; i < 10; i++)
  	{
  		cout << endl;
  		
  		cout << "Student " << i+1 << ": " << endl;
  		
  		cout << endl;
  		
	 	cout << "Enter the Roll Number: ";
	  	cin >> roll_number;
	  	
	  	cout << endl;
	  	
	  	cout << "Enter the First Name: ";
	  	cin >> first_name;
	  	
	  	cout << endl;
	  	
	  	cout << "Enter the Last Name: ";
	  	cin >> last_name;
	  	
	  	cout << endl;
	  	
	  	cout << "Enter the Department: ";
	  	cin >> department;
	  	
	  	cout << endl;
	  	
	  	cout << "Enter the Section: ";
	  	cin >> section;
	  	
	  	x << roll_number << " " << first_name << " " << last_name << " " << department << " " << section << endl;

  	}

  	x.close();

	return 0;
}
