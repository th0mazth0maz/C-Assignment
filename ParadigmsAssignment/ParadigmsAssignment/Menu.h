#pragma once
#include "ItemList.h"
#include "Item.h"
#include <iostream>
#include <vector>

class Menu : public ItemList
{
public:
	Menu(std::string filePath);
	void add(std::string filePath);
	void remove();
	std::string toString() override;
};

