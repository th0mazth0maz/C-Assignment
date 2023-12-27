#pragma once
#include "Item.h"

class Appetiser : public Item
{
public:
	Appetiser(std::string n, std::string p, std::string c/*, std::string s, std::string t*/);
	~Appetiser();
	std::string toString(int i);
	std::string getName();
	std::string getPrice();
	std::string getCalories();
protected:
	bool shareable;
	bool twoForOne;
};

