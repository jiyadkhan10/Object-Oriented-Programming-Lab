#include <iostream>
#include <string>

using namespace std;

void function(string *ch)
{
	string x;
	x = *ch;
	for (int i = 0; i <= x.length(); i++)
	{
		if (x[i] == ' ')
		{
			x[i] = '-';
			
	    }
	    
    }
    
}
int main()
{
	int m;
	string ch;
	cout << "Enter the sentence: ";
	cin >> ch;
	function(&ch);
	cout << ch;
}
