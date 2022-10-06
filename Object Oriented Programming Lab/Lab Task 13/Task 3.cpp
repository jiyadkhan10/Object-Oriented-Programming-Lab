#include<iostream>

using namespace std;

class Shape 
{
	public:
		
    	virtual int get_area() = 0;
    	virtual int get_perimeter() = 0;
};

class Rectangle: public Shape 
{   	
   	public:
   		
   		int length = 0;
    	int width = 0;
   		
      	int get_area() 
		{
         	return (length * width);    
      	}
      	
      	int get_perimeter() 
		{
         	return 2 * (length + width);   
      	}
};

class Square: public Shape 
{
    	
   	public:
   		
   		int side = 0;
   		
      	int get_area() 
		{
         	return (side * side);    
      	}
      	
      	int get_perimeter() 
		{
         	return 4 * side;     
      	}
};

int main() 
{
    
    Rectangle r;
    Square s;
    
    cout << "Rectangle: " << endl;
    
    cout << endl;
    
    cout << "Enter the length: ";
    cin >> r.length;
    
    cout << "Enter the perimeter: ";
    cin >> r.width;
    
    cout << endl;
    
    cout << "Total Area: " << r.get_area() << endl;
    cout << "Total Perimeter: " << r.get_perimeter() << endl;
    
    cout << endl;
    
    cout << "Square: " << endl;
    
    cout << endl;
    
    cout << "Enter the side: ";
    cin >> s.side;   
	
	cout << endl;
    
    cout << "Total Area: " << s.get_area() << endl;
    cout << "Total Perimeter: " << s.get_perimeter() << endl;
    
    cout << endl; 
   
}
