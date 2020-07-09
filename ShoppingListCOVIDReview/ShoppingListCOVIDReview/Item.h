#pragma once
#include <iostream>
#include <string.h>
#include <tuple>

class Item
{
private:
	std::string name = "";
	std::string description = "";

public:
	Item(std::string name, std::string description) :name(name), description(description) {}
	std::tuple<std::string, std::string> Get();
	/*public:
		std::string itemName = "";
		std::string itemDescription = "";
		int x;
		Item(int X) :x(X){}
		Item();
		Item(std:: string inputedItemName = "", std::string inputedItemDescription = "");
		*/
};

