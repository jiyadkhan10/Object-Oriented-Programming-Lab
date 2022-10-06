//============================================================================
// Name        : Task.cpp
// Author      : Jiyad Khan
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include "Sale.h"

using namespace std;

int main() {

	Sale s(3.0);
	cout << s.getItemCost() << endl;
	cout << s.getTaxRate() << endl;
	cout << s.getTax() << endl;
	cout << s.getTotal() << endl;
}

