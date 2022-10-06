#ifndef TELEDIRECTORY_H_
#define TELEDIRECTORY_H_

#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class TeleDirectory
{
	string name;
	string address;
	string phone_number;
	
	public:
		
		TeleDirectory()
		{
		   name = " ";
		   address = " ";
		   phone_number = " ";
		}
		TeleDirectory(string n, string p_number, string a)
		{
			name = n;
    		phone_number = p_number;
    		address = a;
		}

		void writeDirectory(string n, string p_number, string a)
		{
  			ofstream x;
  			
  			x.open("teledir.txt",ios::app);
  			
  			x << n << endl;
  			x << p_number << endl;
  			x << a << endl;
  			x << endl;
  			
  			x.close();

		}
		
		string searchByName(string n)
		{
  			int check = -1;
  			string test;
  			ifstream x;
  			
  			x.open("teledir.txt");
  
  			while(!x.eof())
 			{
   				getline(x,test);
   				check++;
 			}
  
  			x.close();

  			x.open("teledir.txt");

  			string array[check];
  			
  			while(!x.eof())
 			{
   				for(int i = 0; i < check; i++)
   				{
   					getline(x, array[i]);
   				}
 			}

 			string result;
 			int index = 0;
 			for(int i=0; i < check; i++)
 			{
    			if(array[i] == n)
    		 	{
        			index = i;
     			}
    
 			}

  			result = array[index + 1];
 
 			return result;
		}
		
		std::string searchByNumber(string n)
		{
     		int check = -1;
  			string test;
  			ifstream x;
  			
  			x.open("teledir.txt");
  
  			while(!x.eof())
 			{
   				getline(x, test);
   				
   				x++;
 			}
  
 	 		x.close();

  			x.open("teledir.txt");

  			string array[check];
  			while(!x.eof())
 			{
   				for(int i = 0; i < check; i++)
   				{
   					getline(x,array[i]);
   				}
 			}

 			string result;
 			int index = 0;
 			
 			for(int i = 0; i < check; i++)
 			{
    			
				if(array[i] == n)
     			{
        			index = i;
     			}
    
 			}

  			result = array[index - 1];
 
 			return result;
		}


		void printDirectory()
		{
   			ifstream x;
   			string s;
   			
   			x.open("teledir.txt");

   			cout << "MAKING DIRECTORY" << endl;
   			while(!x.eof())
   			{
     			getline(x, s);
     		
     			cout << s << endl;
   			}
  
   			x.close();

		}
		//virtual ~TeleDirectory();

};

#endif /* TELEDIRECTORY_H_ */
