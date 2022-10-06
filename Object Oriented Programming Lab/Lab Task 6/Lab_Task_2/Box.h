#ifndef BOX_H_
#define BOX_H_

#include <iostream>

using namespace std;

class Box {

        double lenght;
        double height;
        double breadth;
public:
        Box()
        Box(double l, double h, double w, string c, string m="Card");
	void setLength(double l);
	void setBreadth(double b);
	void setHeight(double h);
	double getLength();
        double getHeight();
	double getBreadth();
        string getColor();
	void setColor(string c);
	string getMaterial();
	double getVolume();
	double getSurfaceArea();
	void print();
	bool update(Box b[], int size, int index, double height);



};

#endif /* BOX_H_ */
