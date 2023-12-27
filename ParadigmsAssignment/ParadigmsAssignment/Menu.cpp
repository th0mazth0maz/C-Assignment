#include "Menu.h"
#include "ItemList.h"
#include "Item.h"
#include "Appetiser.h"
#include "MainCourse.h"
#include "Beverage.h"
#include <string>
#include <vector>
#include <ios>
#include <iosfwd>
#include <istream>
#include <ostream>
#include <streambuf>
#include <iostream>
#include <fstream>
#include <sstream>
#include <strstream>
#include <iomanip>

Menu::Menu(std::string filePath)
{
	add(filePath);
}

void Menu::add(std::string filePath)
{
	std::string info = "";
	std::ifstream file(filePath);
	while (!file.eof())
	{
		char buf[1024];
		file.getline(buf, 1024);
		std::string str = (1, buf);
		std::vector<std::string> itemInfo;
		for (int i = 0; i < strlen(buf); i++)
		{
			if (str[i] == ',')
			{
				itemInfo.push_back(info);
				info = "";
			}
			else if (i == strlen(buf) - 1)
			{
				info = info + str[i];
				itemInfo.push_back(info);
				info = "";
			}
			else
			{
				info = info + str[i];
			}
		}
		if (itemInfo[0] == "a")
		{
			Appetiser appetiser = Appetiser(itemInfo[1], itemInfo[2], itemInfo[3]/*, itemInfo[4], itemInfo[5]*/);
			Item* item = &appetiser;
			items.push_back(item);


			//Item* item = new Appetiser(itemInfo[1], itemInfo[2], itemInfo[3], itemInfo[4], itemInfo[5]);
			//add(item);
			std::cout << "Contains appetiser: " << appetiser.getName() << ", " << item->getName() << ", " << itemInfo[3] << ", " << itemInfo[4] << ", " << itemInfo[5] << std::endl;
		}
		else if (itemInfo[0] == "m")
		{
			MainCourse mainCourse = MainCourse(itemInfo[1], itemInfo[2], itemInfo[3]);
			Item* item = &mainCourse;
			items.push_back(item);


			//Item* item = new MainCourse(itemInfo[1], itemInfo[2], itemInfo[3]);
			//add(item);
			std::cout << "Contains main course: " << itemInfo[1] << ", " << itemInfo[2] << ", " << itemInfo[3] << std::endl;
		}
		else if (itemInfo[0] == "b")
		{
			Beverage beverage = Beverage(itemInfo[1], itemInfo[2], itemInfo[3]/*, itemInfo[6], itemInfo[7]*/);
			Item* item = &beverage;
			items.push_back(item);


			//Item* item = new Beverage(itemInfo[1], itemInfo[2], itemInfo[3], itemInfo[6], itemInfo[7]);
			//add(item);
			std::cout << "Contains beverage: " << itemInfo[1] << ", " << itemInfo[2] << ", " << itemInfo[3] << ", " << itemInfo[6] << ", " << itemInfo[7] << std::endl;
		}
		//report error and move on!
		else
		{
			std::cout << "An error occurred!" << std::endl;
		}
	}
	//file.close();

	//items.push_back(item);
}

void Menu::remove()
{
	for (int i = 0; i < items.size(); i++)
	{
		items[i]->~Item();
	}
}

std::string Menu::toString()
{
	std::string print = "";
	for (int i = 0; i < items.size(); i++)
	{
		Appetiser* app = (Appetiser*)items[i];
		std::string p = app->toString(i + 1);
		print = print + p;
	}
	return print;

	//std::string print = "";
	//Item* item;
	//for (int i = 1; i < items.size(); i++)
	//{
		//item = items[i];
		//std::string p = item->toString(i, item);
		//print = print + p;
		//std::cout << "something done" << std::endl;
	//}
	//return print;
}