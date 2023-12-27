#pragma once
#include "Item.h"
#include <iostream>
#include <vector>

class ItemList
{
public:
	ItemList();
	~ItemList();
	virtual std::string toString() = 0;
protected:
	std::vector<Item*> items;
};

