#include <iostream>

using namespace std;

class Shape
{
    
    protected:
    	
    	string type;
    	float width;
		float height;
    
    public:
    
	    Shape()
		{
	    	type = "Shape";
	        width = 1.0;
	        height = 2.0;
	    }
    
	    string get_type()
		{
	        return type;
	    }
    
	    void set_type(string t)
		{
	        type = t;
	    }
    
	    float get_width()
		{
	        return width;
	    }
    
	    void set_width(float w)
		{
	        width = w;
	    }
    
	    float get_height()
		{
	        return height;
	    }
	    
	    void set_height(float h)
		{
	        height = h;
	    }
    
	    virtual float area()
		{
	        return 0;
	    }
    
	    virtual void display()
		{
	        cout << "Type: " << type << endl;
	        cout << "Width: " << width << endl;
	        cout << " Height: " << height << endl;
	    }
};

class Rectangle: public Shape
{
    public:
    
    	Rectangle()
		{
        	type = "Rectangle";
        	width = 1.0;
        	height = 2.0;
    	}
    
    	string get_type()
		{
        	return type;
    	}
    
    	void set_type(string t)
		{
        	type = t;
    	}
    
    	float get_width()
		{
    	    return width;
    	}
    
    	void set_width(float w)
		{
    	    width = w;
    	}
    
    	float get_height()
		{
        	return height;
    	}
    
    	void set_height(float h)
		{
        	height = h;
    	}
    
    	float area()
		{
        	return (width * height);
    	}
    
    	void display()
		{
    	    cout << "Type: " << type << endl;
    	    cout << " Width: " << width << endl;
    	    cout << "Height: " << height << endl;
    	}
};

class Triangle: public Shape
{
   
    private:
    	
    	float base;
    
    public:
    
    	Triangle()
		{
    	    type = "Triangle";
    	    height = 2.0;
    	    base = 1.0;
    	}
    	
    	string get_type()
		{
    	    return type;
    	}
    
    	void set_type(string t)
		{
    	    type = t;
    	}
    
    	float get_height()
		{
    	    return height;
    	}
    
    	void set_height(float h)
		{
    	    height = h;
    	}
    
    	float get_base()
		{
    	    return base;
    	}
    
    	void set_base(float b)
		{
    	    base = b;
    	}
    	
    	float area()
		{
    	    return (0.5 * base * height);
    	}
    	
    	void display()
		{
    	    cout << "Type: " << type << endl;
    	    cout << "Base: " << base << endl;
    	    cout << " Height: " << height << endl;
    	}
};

class Circle: public Shape
{
    
    private:
    	
    	float radius;
    
    public:
    
    	Circle()
		{
    	    type = "Circle";
    	    radius = 1.0;
    	}
    	
    	string get_type()
		{
    	    return type;
    	}
    
    	void set_type(string t)
		{
    	    type = t;
    	}
    	
    	float getRadius()
		{
    	    return radius;
    	}
    
    	void set_radius(float r)
		{
    	    radius = r;
    	}
    	
    	float area()
		{
    	    return (3.14 * radius * radius);
    	}
    	
    	void display()
		{
    	    cout << "Type: " << type << endl;
    	    cout << "Radius: " << radius << endl;
    	}
};

int main()
{
    
    Rectangle r;
    Triangle t;
    Circle c;
    
    float width;
	float height; 
	float base;
	float radius;
    
    cout << "Enter width of Rectangle: ";
    cin >> width;
    
    cout << "Enter height of Rectangle: ";
    cin >> height;
    
    r.set_width(width);
    r.set_height(height);
   
    r.display();
    cout << "Area: " << r.area() << endl;
    
    cout << "Enter base of Triangle: ";
    cin >> base;
    cout << "Enter height of Triangle: ";
    cin >> height;
   
    t.set_base(base);
    t.set_height(height);

    t.display();
    cout << "Area: " << t.area() << endl;
    
    cout << "Enter radius of Circle: ";
    cin >> radius;
    
    c.set_radius(radius);
    
    c.display();
    cout << "Area: " << c.area() << endl;
    
    return 0;
}
