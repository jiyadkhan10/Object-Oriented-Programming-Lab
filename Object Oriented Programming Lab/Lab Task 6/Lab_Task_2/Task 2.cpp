//============================================================================
// Name        : Task.cpp
// Author      : Jiyad Khan
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include "Box.h"

using namespace std;

int main() {

	double l=2;
	double b=3;
	double h=4;
	
	Box box;
	box.setLength(l);
	box.setBreadth(b);
	box.setHeight(h);
	
	cout << box.getSurfaceArea() << endl;
	cout << box.getVolume() << endl;
	
	Box arr[3];
	
	if(box.update(arr,5,2,5))
	{
	     cout << arr[2].getHeight() << endl;
	}
	
	return 0;
	
}

