//============================================================================
// Name        : Task.cpp
// Author      : Jiyad Khan
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	Coffeeshots c(20,55, "latte");
	
	cout << c.getSize() << endl;
	cout << c.spillOver(5) << endl;
	
	Coffeeshots d(20,55, "latte");
	d.upSize();
	
	cout << d.getSize() << endl;
	
	return 0;
}
