#pragma once
#include "ItemList.h"

class Order : public ItemList
{
public:
	Order();
	~Order();
	void calculateTotal();
	void printReceipt();
	std::string toString() override;
private:
	double total;
};

