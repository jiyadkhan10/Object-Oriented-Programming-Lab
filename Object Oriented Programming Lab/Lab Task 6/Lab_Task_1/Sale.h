#ifndef SALE_H_
#define SALE_H_

#include <iostream>

using namespace std;

class Sale {

	double itemcost;
	double taxRate;

public:
	Sale();
	Sale(double cost, double rate = 0.05);

	double getItemCost();
	double getTaxRate();
	double getTax();
	double getTotal();

};

#endif /* SALE_H_ */
