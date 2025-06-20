/* ------------------------------------------------------
CMP2811 Applied Programming Paradigms
Driver program for "Takeaway" assignment
Autumn 2023

This file is a representative test file.
During marking, we will use the exact same notation
as provided in the brief, so make sure you follow that guideline.
Also make sure that you don't modify the code provided here,
but instead add what you need to complete the tasks.

Good luck!
------------------------------------------------------ */
#define _CRT_SECURE_NO_WARNINGS

#include "Menu.h"
#include "Order.h"
#include "Item.h"

#include <iostream>
#include <vector>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	string userCommand;
	vector <string> parameters;

	cout << "before" << endl;
	// Create a menu object from a CSV file
	Menu menu = Menu("menu (2).csv");

	cout << "intermediate" << endl;
	// Create an order object
	//Order order = Order();
	cout << menu.toString();
	
	cout << "after" << endl;
	while (userCommand != "exit")
	{
		getline(cin, userCommand);
		char* cstr = new char[userCommand.length() + 1];
		strcpy(cstr, userCommand.c_str());

		char* token;
		token = strtok(cstr, " ");

		while (token != NULL)
		{
			parameters.push_back(token);
			token = strtok(NULL, " ");
		}

		string command = parameters[0];

		if (command.compare("menu") == 0) {
			cout << "made it before" << endl;
			cout << menu.toString();
			cout << "made it after" << endl;
		}
		else if (command.compare("add") == 0)
		{
			Item* choice; // you need to instantiate this using the menu object!
			//order.add(choice);

			// You may also wish to implement the ability to add multiple items at once!
			// e.g. add 1 5 9 
		}
		else if (command.compare("remove") == 0)
		{

		}
		else if (command.compare("checkout") == 0)
		{

		}
		else if (command.compare("help") == 0)
		{

		}

		parameters.clear();

	}
}
