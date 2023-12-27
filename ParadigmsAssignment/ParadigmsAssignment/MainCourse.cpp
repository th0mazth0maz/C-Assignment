#include "MainCourse.h"
#include <iostream>
#include <string>

MainCourse::MainCourse(std::string n, std::string p, std::string c)
{
	name = n;
	price = stod(p);
	calories = stoi(c);
}

MainCourse::~MainCourse()
{

}

std::string MainCourse::toString(int i)
{
	std::string print = "( " + std::to_string(i) + " ) " + name + ": £" + std::to_string(price) + ", " + std::to_string(calories) + "cal";
	std::cout << "accessed main course" << std::endl;
	return print;
}

std::string MainCourse::getName()
{
	return name;
}

std::string MainCourse::getPrice()
{
	return std::to_string(price);
}

std::string MainCourse::getCalories()
{
	return std::to_string(calories);
}
