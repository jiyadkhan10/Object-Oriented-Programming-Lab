#include <iostream>

using namespace std;

class Professor 
{
   		string name;
   		int employeeID;
   		string Designation;
   		
	public:
		
	   	Professor()
	   	{
	   		name = " ";
			employeeID = 0;
			Designation = " ";	
		}
	   	
   		Professor(string n, int id, string d)
   		{
   			name = n;
   			employeeID = id;
   			Designation = d;
		}
   		
   		void set_name(string n)
   		{
    		name = n;
   		}
   		
   		string get_name()
   		{
   			return name;
   		}
   		
   		void set_employee_ID(int id)
   		{
    		employeeID = id;
   		}
   		
   		int get_employee_ID()
   		{
    		return employeeID;
   		}
   		
   		void set_designation(string d)
   		{
    		Designation = d;
   		}
   		
   		string get_designation()
   		{
    		return Designation;
   		}
   		
   		void display()
   		{
    		cout << name << endl;
			cout << employeeID << endl;
			cout << Designation << endl;
   		}
   		
};

class Department
{
	   	string name;
   		Professor* profList;
   		int no_of_professors;
   		int deptID;
   		
	public:
		
   		Professor* store;
   		
   		Department()
   		{
   			name = " ";
			no_of_professors = 0;
			deptID = 0;
		}
		
   		Department(string n, int n_of_professors, int id)
   		{
			name = n;
			no_of_professors = n_of_professors;
			deptID = id;	   
		}
		
   		void set_dept_ID(int i)
   		{
    		deptID = i;
   		}
   		
   		int get_dept_ID()
   		{
    		return deptID;
   		}
   		
   		void set_name(string n)
   		{
    		name = n;
   		}
   		
   		string get_name()
   		{
    		return name;
   		}
   		
   		void set_no_of_profressors(int n)
   		{
    		no_of_professors = n;
   		}
   		
   		int get_no_of_professors()
   		{
    		return no_of_professors;
   		}
   		
   		bool add_professor(Professor p)
   		{
    		proflist = &p;
    		return 1;
   		}
   		
   		bool delete_professor (int id)
   		{
    		for(store = proflist; store != NULL; store -= sizeof(*proflist))
    		{
        		if(*store.get_employee_ID() == id)
        		{
            		delete store;
            		break;
       			}
   			}
   			
       		return 1;
   		}
   		
   		bool update_professor (int id, string new_designation)
   		{
    		for(store = proflist; store != NULL; store -= sizeof(*proflist))
    		{
        		if(*store.get_employee_ID() == id)
        		{
            		*store.set_designation(new_designation);
            		break;
           		}
       		}
       		
       		return 1;
   		}
   		
   		void display()
   		{
    		cout << name << endl;
			cout << no_of_professors << endl;
			cout << deptID << endl;
			
    		for(store = proflist; store != NULL; store -= sizeof(*proflist))
    		{
        		*store.display();
       		}
   		}
   		
   		virtual ~Department();
};
 
class University 
{
		string name;
		int number_of_departments;
		Department* dept;
		
	public:
		
   		Department* store;
   		
   		University(string n, int n_of_departments);
   		{
   			name = n;
   			number_of_departments = n_of_departments;
		}
		
   		void set_name(string n)
   		{
    		name = n;
   		}
   		
   		string get_name()
   		{
   			return name;    
   		}
   		
   		void set_number_of_departments(int n_of_departments)
   		{
    		number_of_departments = n_of_departments;
   		}
   		
   		int get_number_of_departments()
   		{
    		return number_of_departments;
   		}
   		
   		void set_dept(const Department &d )
   		{
    		dept = &d;
   		}
   		
   		Department get_dept() const
   		{
    		return dept;
   		}
   		
   		bool add_department(Department D)
   		{
    		D = new Department();
    		dept = &D;
    		return 1;
   		}
   		
   		bool delete_department(string name)
   		{
    		for(store = dept; store != NULL; store -= sizeof(*dept))
    		{
        		if(strcmp(*store.get_name() == name))
        		{
            		delete *store;
            		break;
           		}
       		}
   		}
   		
   		bool updateDepartment(int id, string name)
   		{
    		for(store= &d; store != NULL; store -= sizeof(*dept))
    		{
        		if(*store.get_dept_ID() == id)
        		{
            		*store.set_name(name);
            		break;
           		}	
       		}
   		}
   		
   		void display()
   		{
    		cout << name << endl;
    		cout << number_of_departments << endl;
    		
    		for(store = dept; store != NULL; store -= sizeof(*dept))
    		{
        		*store.display();
       		}
   		}
   		
   		virtual ~University();
};
