#pragma once
#include "Item.h"
#include <iostream>

class Beverage : public Item
{
public:
	Beverage(std::string n, std::string p, std::string c /*, std::string v, std::string a*/);
	~Beverage();
	std::string toString(int i);
	std::string getName();
	std::string getPrice();
	std::string getCalories();
	std::string getVolume();
	//std::string getAbv();
protected:
	int volume;
	double abv;
};

