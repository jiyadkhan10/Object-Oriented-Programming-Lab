#include<iostream>

using namespace std;

class Complex
{
    private:
    	double real;
		double imaginary;
    
    public:
    	Complex() // Constructor
		{
        	real = 0;
        	imaginary = 0;
    	}
    	
    	void setReal(double r)
		{
        	real = r;
    	}
    	
    	double getReal()
		{
        
        	return real;
    	}
    	
    	void setImaginary(double i)
		{
        	imaginary = i;
    	}
    
    	double getImaginary()
		{
        	return imaginary;
    	}
    	
    	Complex operator + (Complex const &obj)
		{
       		Complex res;
        	res.real = real + obj.real;
        	res.imaginary = imaginary + obj.imaginary;
        	
        	return res;
    	}
    	
    	Complex operator - (Complex const &obj)
		{
       		Complex res;
        	res.real = real - obj.real;
        	res.imaginary = imaginary + obj.imaginary;
        	
        	return res;
    	}
    	
    	Complex operator * (Complex const &obj)
		{
        	Complex res;
        	res.real = (real * obj.real) - (imaginary * obj.imaginary);
        	res.imaginary = (real * obj.imaginary) + (obj.real *  imaginary);
        	
        	return res;
    	}
    	
    	void operator = (Complex const &obj)
		{
        	real = obj.real;
        	imaginary = obj.imaginary;
    	}
    	
    	bool operator == (Complex const &obj)
		{
        	if( (real == obj.real) && (imaginary == obj.imaginary))
			{
            	return true;
        	}
        	
        	else
			{
            	return false;
        	}
    	}
    	
    	bool operator ! ()
		{
        
        	if((real == 0) && (imaginary == 0))
			{
            	return true;
        	}
        	
        	else
			{
            	return false;
        	}
    	}
};

int main()
{
    // Main function to show the result of each and every method
    Complex c1, c2;
    
    c1.setReal(14);
    c1.setImaginary(8);
    c2.setReal(9);
    c2.setImaginary(12);
    
    double r1, i1, r2, i2;
    
    r1 = c1.getReal();
    i1 = c1.getImaginary();
    cout << "C1:" << endl;
	cout << "Real: " << r1 << "\t Imaginary: " << i1 << endl;
    
    r2 = c2.getReal();
    i2 = c2.getImaginary();
    cout << "C2:" << endl;
	cout << "Real: " << r2 << "\t Imaginary: " << i2 << endl;
	
    Complex res;
    
    res = c1 + c2;
    cout <<"Result of addition: " << res.getReal() << " + i(" << res.getImaginary() << ")" << endl;
    
    res = c1 - c2;
    cout << "Result of subtraction: " << res.getReal() << " + i(" << res.getImaginary() << ")" << endl;
    
    res = c1 * c2;
    cout << "Result of multiplication: " << res.getReal() << " + i(" << res.getImaginary() << ")" << endl;
    
    res = c1;
    cout << "Result of assignment: " << res.getReal() << " + i(" << res.getImaginary() << ")" << endl;

    cout << "Res and C1 are equal: " << (res == c1) << endl;

    return 0;
}
