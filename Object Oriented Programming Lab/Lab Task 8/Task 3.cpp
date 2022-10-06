#include<iostream>


using namespace std;

class Date
{
	private:
	
		int year;
		int month;
		int day;
  
	public:
		Date()
		{
			year = 0;
			month = 0;
			day = 0;
		}
		
		Date(int year, int month,int day)
		{
   			year = year;
			month = month;
			day = day;
		}
  
		int getDay()
		{
   			return (day);
		}
		
		int getMonth()
		{
			return (month);
		}
		
		int getYear()
		{
			return (year);
		}
  
		string ToString()
		{
			string Convert;
			string to_string;

			Convert = to_string(year) + "/" + to_string(month) +"/" + to_string(day);
	
			return Convert;
		}
  
		Date operator + (Date const &obj) 
		{
			Date res;
			res.year = year + obj.year;
			res.month = month + obj.month;
			res.day = day + obj.day;
			
			return res;
		}
  
		Date operator - (Date const &obj)
		{
			Date res;
			res.year = year - obj.year;
			res.month = month - obj.month;
			res.day = day - obj.day;
			
			return res;
		}
  
		Date operator - (int d) 
		{
	  		Date res;
			res.day = day - d;
			res.year = year;
			res.month = month;
			
			return res;
		}
  
		Date operator + (int d) 
		{
			Date res;
			res.day = day + d;
			res.year = year;
			res.month = month;
			
			return res;
		}
  
};

int main()
{
	Date d1(2006, 5, 20);
	Date d2(1200, 4, 5);
	
	cout << "Date1: " << d1.ToString() << endl;
	cout << "Date2: " << d2.ToString() << endl;
  
	Date d3 = d1 + d2;
	cout << "Date3: " << d3.ToString() << endl;
	
	d3 = d1 - d2;
	cout << "Date4: " << d3.ToString() << endl;
  
	d1 = d1 + 5;
	cout << "Date5: " << d1.ToString() << endl;
	
	d2 = d2 - 2;
	cout << "Date6: " << d2.ToString() << endl;
	
	return 0;
}
