/*
 * CoffeeShots.h
 *
 *  Created on: Nov 6, 2020
 *      Author: Jiyad Khan
 */
#include <iostream>
using namespace std;
#ifndef COFFEESHOTS_H_
#define COFFEESHOTS_H_

class CoffeeShots
{
	string CoffeeType;
	double price;
	float volume;
	char size;

public:

	CoffeeShots();
	CoffeeShots(double,float ,string,char);
	void setPrice(double price);
	double getPrice( );
	float getVolume( );
	string getType( );
	char getSize( );
	void upSize( );
	float spillOver(float vol);
	void print( );
	CoffeeShots& createMyCofee( );

	~CoffeeShots();
};

#endif /* COFFEESHOTS_H_ */
