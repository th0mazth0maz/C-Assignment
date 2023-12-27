#pragma once
#include "Item.h"
#include <iostream>

class MainCourse : public Item
{
public:
	MainCourse(std::string n, std::string p, std::string c);
	~MainCourse();
	std::string toString(int i);
	std::string getName();
	std::string getPrice();
	std::string getCalories();
};

