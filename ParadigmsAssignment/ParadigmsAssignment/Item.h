#pragma once
#include <iostream>
class Item
{
public:
	Item();
	virtual ~Item();
	virtual std::string toString(int i) = 0;
	virtual std::string getName() = 0;
	virtual std::string getPrice() = 0;
	virtual std::string getCalories() = 0;
protected:
	std::string name;
	double price;
	int calories;
};

