#include <iostream>

using namespace std;

class Employee 
{
	
    protected:
    	
    		int employee_number;
    		
    public:
    	
    	virtual int get_salary() = 0;
    	virtual string to_string() = 0;
};

class Developer : public Employee 
{
    private:
    	
    	int salary;
    
    public:
    	
    	Developer() 
		{
			salary = 0;
		}
		
    	Developer(int e, int s) 
		{
        	employee_number = e;
        	salary = s;
    	}
    	
    	int get_salary () 
		{
        	return salary;
    	}
		    
    	string to_string () 
		{
        	return "Developer: ";
    	}
};

class Driver : public Employee
{
	
    private:
    	
    	int salary;
    
    public:
    	
    	Driver ()
		{
			salary = 0;
		}
		
    	Driver(int e, int s) 
		{
        	employee_number = e;
        	salary = s;
    	}
    	
    	int get_salary () 
		{
        	return salary;
    	}    
    	
		string to_string () 
		{
        	return "Driver: ";
    	}
};

int main()
{
    Employee *x, *y;
    
   	x = new Driver(32, 50000);
    y = new Developer(58, 100000);
    
    
    cout << x->to_string () << endl;
	cout << "\t" << "Driver's Salary: " << x->get_salary () << endl;
	
	cout << endl;
    
    cout << y->to_string () << endl;
	cout << "\t" << "  Developer's Salary: " << y->get_salary () << endl;
	
    return 0;
}
