#include <iostream>
#include "CoffeeShots.h"

using namespace std;

CoffeeShots::CoffeeShots()
{
	CoffeeType = "";
	price = 0;
	volume = 0;
	size = '\0';
}

CoffeeShots::CoffeeShots(double cost,float vol,string type, char s)
{
	price = cost;
	volume = vol;
	CoffeeType = type;

	if(volume > 0 && volume <= 50)
	{
		size = 's';
	}
	else if(volume > 50 && volume <= 75)
	{
		size = 'm';
	}
	else if(volume > 75)
	{
		size = 'l';
	}
}

void CoffeeShots::setPrice(double cost)
{
	price = cost;
}

double CoffeeShots::getPrice()
{
	return price;
}

float CoffeeShots::getVolume()
{
	return volume;
}

string CoffeeShots::getType()
{
	return CoffeeType;
}
char CoffeeShots::getSize()
{
	return size;
}

void CoffeeShots::upSize()
{
	volume += 5;
	price += 5;
}

float CoffeeShots::spillOver(float spill)
{
	return volume - spill;
}

CoffeeShots& CoffeeShots::createMyCofee()
{
	CoffeeShots* coffee = new CoffeeShots;

	string CoffeeType;
	double price;
	float volume;
	char size;


}



