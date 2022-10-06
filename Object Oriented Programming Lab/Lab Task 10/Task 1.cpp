#include<iostream>
#include<cstring>

using namespace std;

class Employee
{
	private:
		string firstName;
		string lastName;
		int CNIC;

	public:
		Employee()
		{
			firstName='\0';
			lastName='\0';
			int CNIC;
		}
		
		Employee(string f_name, string l_name, int CNIC_number)
		{
			this->firstName = f_name;
			this->lastName = l_name;
			this->CNIC=CNIC_number;
		}
	
		string getfirstName()
		{
			return this->firstName;
		}
		string getlastName()
		{
			return this->lastName;
		}
		int getCNIC()
		{
			return this->CNIC;
		}
		double earnings( ) 
		{
		  return 0.00;
		}
		
	
};
	class  SalariedEmployee : public Employee
	{
		
		private:

		double weeklysalary;
		
		public:
			//default constructor;
			SalariedEmployee()
			{
				weeklysalary = 0.0;
			}
			
			SalariedEmployee(float weeklysalary)
			{
				if (weeklysalary < 0)
				{
					weeklysalary = 1;
				}
				
				this->weeklysalary = weeklysalary;
			}

			 double earnings( ) 
		 	{
		  		return this->weeklysalary;
			}
					
};

	class  CommissionEmployee : public Employee
	{
		
		private:

			double commision_rate,gross_sale;
		
		public:
			//default constructor;
			 CommissionEmployee()
			{
				commision_rate = 0.0;
				gross_sale = 0.0;
			}
			
			 CommissionEmployee(float commision_rate,float gross_sale)
			{
				if (commision_rate < 0)
				{
					commision_rate=1;
			    }
				
				else if (gross_sale < 0)
				{
					gross_sale=1;
				}
				else
				{
					this->commision_rate = commision_rate;
					this->gross_sale = gross_sale;
				}
				
			}

			 double earnings( ) 
		 	{
		  		return (gross_sale*commision_rate);
			}
					
};

int main()
{
	char x;
	string f_name,l_name;
	int CNIC,g_s,c_r;
	float salary;
	
	cout << " Enter whether employee is Commision or salaried : c for commision and s for salaried: ";
	cin >> x;
	
	if (x == 's')
	{
		
		cin.ignore();	
		cout << "Enter first and last name of employee: ";
		
		getline(cin,f_name);
		getline(cin,l_name);
		
		cout << "Enter the CNIC:";
		cin >> CNIC;
		
		Employee y(f_name,l_name,CNIC);

		cout << "First name is "<< y.getfirstName() << endl;

		cout << "Last name is "<< y.getlastName() << endl;

		cout << "CNIC is "<< y.getCNIC() << endl;
		
		cout << "Enter weekly salary: ";
		cin >> salary;
		
		SalariedEmployee z(salary);
		
		cout <<"Weekly salary is " << z.earnings();
		
	}
	
	else if (x =='c')
	{	
		cin.ignore();
			
		cout<< "Enter first and last name of employee: ";
		
		getline(cin,f_name);
		
		getline(cin,l_name);
		
		
		cout << "Enter the CNIC: ";
		cin >> CNIC;
		
		 Employee y(f_name,l_name,CNIC);
	
		cout << "First name is "<< y.getfirstName() << endl;
	
		cout << "Last name is "<< y.getlastName() << endl;
	
		cout << "CNIC is "<< y.getCNIC() << endl;
		
		cout << "Enter commision rate and grossale: ";
		cin >> c_r >> g_s;
		
	CommissionEmployee z(c_r,g_s);
		
		cout<< "Income is " << z.earnings();
		
	}
	
	else 
	{
		cout << "Invalid Input!!!!!!";
	}
}
