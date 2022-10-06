#include <iostream>

using namespace std;

class fuelvehicle
{
	private:
		
		int km_s;

	public:
	
		fuelvehicle()
		{
			km_s = 0;
		}
		
		float getmileage (float km_s)
		{
			
			if (this->km_s < 100)
			{
				return (km_s * 0.2);
			}
			
			if (100<=this->km_s<=400)
			{
				return (km_s * 0.3);
			}
		
			if (this->km_s > 400)
			{
				int x = 0;
				x = this->km_s-400;
			
				return (0.3 * 400 + 0.5 *x);	
			}
		}
	
	
};

class car: public fuelvehicle
{
	private:
		
		int seats;
		float cost;
		
	public:
		
		car()
		{
			seats=0;
			cout << " Name is Car: " << endl;
			
		}
		
		car(int seats)
		{
			this->seats = seats;
			cout << "No of seats are " << seats << endl;
		}
		
		void getcost(float fees, float mile_age)
		{
			cost = this->seats * fees * mile_age;	
			
		}
		
		float get_cost()
		{
			return cost;
		}
		
		
};		

class truck: public fuelvehicle
{
	private:
		
		int seats;
		float cost;
		
	public:	
		truck()
		{
			seats=0;
			cout << "Name is Truck: " << endl;	
		}
		
		truck(int seats)
		{
			this->seats = seats;
			cout << "No of seats are " << seats << endl;		
		}
		
		void getcost(float fees,float mile_age)
		{	
			cost = this->seats * fees * mile_age;		
		}
		
		float get_cost()
		{
			return cost;
		}
		
		
};

class bicycle : public fuelvehicle
{
	private:
		
		int days;
		float cost;
		
	public:
		
		bicycle()
		{
			days = 0;
			cout << "Name is bicycle: " << endl;
			
		}
		
		bicycle(int days)
		{
			this->days = days;
			cout << "No od days are " << days << endl;
		}
		
		void getcost(float fees)
		{
			cost = this->days * fees;	
		}
		
		float get_cost()
		{
			return cost;
		}
		
		
};

int main()
{
	char x;
	
	int seats,days;
	float km_s,fees;
	
	cout << "Enter Your choice of vehicle, c for car, t for truck and b for bicycle: ";
	cin >> x;
	
	if (x == 'c')
	{
		cout << "Enter the number of seats and fee:";
		cin >> fees >> seats;
		
		cout << endl;
			
		car y;
		car z(seats);
					
		cout << "Enter kms for you want to go ";	
		cin >> km_s;
				
		z.getmileage(km_s);
				
		z.getcost(fees,km_s);
				
		cout << "Total cost is " << z.get_cost();	

	}
	
	else if (x == 't')
	{
		cout << "Enter the number of seats and fee:";
		cin >> fees >> seats;
		
		cout << endl;
				
		truck y;		
		truck z(seats);
					
		cout << "Enter kms for you want to go ";	
		cin >> km_s;
				
		z.getmileage(km_s);
				
		z.getcost(fees,km_s);
				
		cout << "Total cost is "<< z.get_cost() << endl;	
		

	}
	else if (x == 'b')
	{			
		cout << "Enter the no of  days you want to rent: ";
		cin >> days;
		
		cout << endl;
						
		bicycle y;		
		bicycle z(days);
				
		cout << "Enter the cost:";
		cin >> fees;
		
		z.getcost(fees);
						
		cout << "Total cost is " << z.get_cost();		
	}
	
	else
	{
		cout << "Invalid Input!!!!!!";
  	}
}
