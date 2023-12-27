#include "Appetiser.h"
#include <iostream>
#include <string>

Appetiser::Appetiser(std::string n, std::string p, std::string c/*, std::string s, std::string t*/)
{
	name = n;
	price = stod(p);
	calories = stoi(c);
	/*if (s == "y")
	{
		shareable = true;
	}
	else
	{
		shareable = false;
	}
	if (t == "y")
	{
		twoForOne = true;
	}
	else
	{
		twoForOne = false;
	}*/
}

Appetiser::~Appetiser()
{
	
}

std::string Appetiser::toString(int i)
{
	std::string const print = "( " + std::to_string(i) + " ) " + name + ": £" + std::to_string(price) + ", " + std::to_string(calories) + "cal";
	std::cout << "accessed appetiser" << std::endl;
	return print;
}

std::string Appetiser::getName()
{
	return name;
}

std::string Appetiser::getPrice()
{
	return std::to_string(price);
}

std::string Appetiser::getCalories()
{
	return std::to_string(calories);
}