#include "Sale.h"
#include <iostream>

using namespace std;

Sale :: Sale()
{
//write your code here
	double itemcost = 0.0;
	double taxRate = 0.0;

}
 Sale :: Sale(double cost, double rate)
 { //write your code here
	 itemcost = cost;
	 taxRate = rate;
 }

 double Sale :: getItemCost()
 { //write your code here
      return itemcost;
 }

 double Sale :: getTaxRate()
 {//write your code here
	 return taxRate;
 }

 double Sale :: getTax()
 {//write your code here
	 return itemcost * taxRate;
 }

 double Sale :: getTotal()
 { //write your code here
	 return getTax() + itemcost;
 }

