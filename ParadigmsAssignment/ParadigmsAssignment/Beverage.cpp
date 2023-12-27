#include "Beverage.h"
#include <iostream>
#include<string>

Beverage::Beverage(std::string n, std::string p, std::string c/*, std::string v, std::string a*/)
{
	name = n;
	price = stod(p);
	calories = stoi(c);
	/*volume = stoi(v);
	abv = stod(a);*/
}

Beverage::~Beverage()
{

}

std::string Beverage::toString(int i)
{
	//Beverage** b = item;
	std::string print = "( " + std::to_string(i) + " ) " + name + ": £" + std::to_string(price) + ", " + std::to_string(calories) + "cal";
	std::cout << "accessed beverage" << std::endl;
	return print;
}

std::string Beverage::getName()
{
	return name;
}

std::string Beverage::getPrice()
{
	return std::to_string(price);
}

std::string Beverage::getCalories()
{
	return std::to_string(calories);
}

std::string Beverage::getVolume()
{
	return std::to_string(volume);
}