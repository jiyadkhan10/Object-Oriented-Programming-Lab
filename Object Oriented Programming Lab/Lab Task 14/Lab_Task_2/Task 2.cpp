#include<iostream>
#include"TeleDirectory.h"

using namespace std;

int main()
{

   	TeleDirectory x;
   	
  	x.writeDirectory("Jiyad Khan", "03100783040", "Islamabad");
    x.writeDirectory("Ahmed Wadood", "03565679054", "Karachi");
    x.writeDirectory("Usman Raza", "03116799610", "Peshawar");
    x.writeDirectory("Muhammad Ali", "03134563890", "Lahore");

    string y;
    y = x.searchByName("Jiyad Khan");
   
    cout << "Output for searchByName fucntion: " << endl;
    cout << "The number you asked for is : " << y << endl;

	cout << endl;

    string z;
    z = x.searchByNumber ("03134563890");

    cout << "Output for searchByNumber function: " << endl;
    cout << "The name of the person with this number is: " << z  << endl;


    x.printDirectory();
    
   	ofstream a;
   	
    a.open("teledir.txt", ios::trunc);     

	return 0;
}
