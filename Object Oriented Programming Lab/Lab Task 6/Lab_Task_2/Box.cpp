#include "Box.h"
#include <iostream>

using namespace std;

Box :: Box()
{//write your code here
	length = 0;
	height = 0;
        width = 0;
        breadth = 0;
	color = " ";
	material = " ";
}

 Box :: Box(double l, double h, double w, string c, string m)
 {//write your code here
	 length = l;
	 height = h;
	 width = w;
	 color = c;
	 material = m;
 }

 void Box :: setLength(double l)
 { //write your code here
	 length = l;
 }

 void Box :: setBreadth(double b)
 {//write your code here
	 breadth = b;
 }

 void Box :: setHeight(double h)
 { //write your code here
	 height = h;
 }

 double Box :: getLength()
 { //write your code here
	 return length;
 }

 double Box :: getHeight()
 { //write your code here
	 return height;
 }

 double Box:: getBreadth()
 { //write your code here
	 return breadth;
 }

 string Box :: getColor()
 { //write your code here
	 return color;
 }

void Box :: setColor(string c)
 { //write your code here
	color = c;
 }

string Box :: getMaterial()
 { //write your code here
	return material;
 }

double Box:: getVolume()
 { //write your code here
	return length * breadth * height;
 }

double Box :: getSurfaceArea()
 { //write your code here
	return 2.0 * (length * breadth + length * height + height * breadth);
 }

 void Box :: print()
 { //write your code here
	 cout << length << endl;
	 cout << height << endl;
	 cout << breadth << endl;
	 cout << material << endl;
	 cout << color << endl;
	 cout << getVolume() << endl;
	 cout << getSurfaceArea() << endl;
 }

 bool Box :: update(Box b[], int size, int index, double height)
 { //write your cBox()

    	b[index].setHeight(height);
    	return true;
 }

