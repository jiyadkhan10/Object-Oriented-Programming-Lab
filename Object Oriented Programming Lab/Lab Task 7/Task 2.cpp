#include <iostream>
#include <string.h>

using namespace std;

class Course
{
	private:
		
		int credithours;
		int repeatcount;
		char section;
		string coursecode;
		string coursetitle;
		
		
	
	public:

	Course(int credit_hours, int repeat_count, char s, string course_code, string course_title)
	{
		
		credithours = credit_hours;
		repeatcount = repeat_count;
		section = s;
		coursecode = course_code;
		coursetitle = course_title;		
	}
	
	void Coursecode(void)
	{
		
		cout << "Course Code:" << coursecode << endl;
	}
	void Coursetitle(void)
	{
		
		cout << "Course Title: " << coursetitle << endl;
	}
	void Credithours(void)
	{
		
		cout << "Credit Hours: "<< credithours << endl;
	}
	void Section(void)
	{
		
		cout << "Section:" << section << endl;
	}
	void Repeatcount(void)
	{
		
		cout << "Repeat count:" << repeatcount << endl;
	}
	
};

int main()
{
	
	int credit_h = 0;
	int repeat_c = 0;
	string c_code;
	string c_title;
	char sec;
	
	cout<<"Enter course code and course title: " << endl;
	
	getline(cin,c_code);
	
	getline(cin,c_title);
	
	cout<<"Enter Credit Hours and Repeat count: " << endl;
	cin >>credit_h;
	cin >> repeat_c;
	
	cout<<"Enter Section: " << endl;
	cin >> sec;
	
	Course x(credit_h, repeat_c, sec, c_code, c_title);
	
	x.Coursetitle();
	x.Coursecode();
	
	x.Credithours();
	x.Section();
	
	x.Repeatcount();
	
}



