#include<iostream>

using namespace std;

// class definition
class Counter
{
	private: // private data attributes
		int count;
		static int objCount;
		int serialNo;
	
	public: // public methods
		
		Counter() // default constructor
		{
			count = 0;
			
			IncrementObjCount();  // calling IncrementObjCount method
			
			serialNo = objCount;  // assigning objCount to serialNo
		}
		
		Counter(int c)  // parameterised constructor
		{
			count = c;
			
			IncrementObjCount();
			
			serialNo = objCount;
		}
		
		~Counter()   // Counter class destructor
		{
			objCount -= 1;
		}
		
		// getter and setter methods
		
		void setCount(int c)
		{
    		count = c;			
		}
		
		int getCount() const
		{
			return count;
		}
		
		int getSerialNo() const
		{
			return serialNo;
		}
		
		static int getObjCount()
		{
			return objCount;
		}
		
		static int IncrementObjCount() // IncrementObjCount method
		{
			objCount += 1;
			return objCount;
		}
		
		void operator= (const Counter& obj) // operator which assigns count data attribute
		{
			count = obj.count;
		}
		
		Counter operator- () // unary minus operator
		{
			count = -1 * count;
			return Counter(count);
		}
};

// initializing the static data variable objCount to 0
int Counter ::  objCount = 0;

int main()
{
	cout << "SerialNumber\t count \t objectcount " << endl;
	
	// creating 4 counter objects
	Counter c1 = Counter();   // default constructor
	cout << c1.getSerialNo() << "\t\t  " << c1.getCount() << "\t\t" << c1.getObjCount() << endl;

	Counter c2 = Counter(55); // parameterised constructor
	cout << c2.getSerialNo() << "\t\t  " << c2.getCount() << "\t\t" << c2.getObjCount() << endl;

	Counter c3 = Counter();
	c3 = c2;   // assigning the value of cont to the left hand operator
	cout << c3.getSerialNo() << "\t\t  " << c3.getCount() << "\t\t" << c3.getObjCount() << endl;

	Counter c4 = Counter();
	c4 = -c2;   // unary operator -
	cout << c4.getSerialNo() << "\t\t  " << c4.getCount() << "\t\t" << c4.getObjCount() << endl;
	cout << c2.getSerialNo() << "\t\t  " << c2.getCount() << "\t\t" << c2.getObjCount() << endl;
	
	return 0;
}
