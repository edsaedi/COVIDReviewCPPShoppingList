#include <iostream>
#include <vector>
#include "Item.h"
#include <algorithm>

std::vector<Item> list = {};

void Add()
{
	std::cout << "Enter in an item to add to the shopping list.\n";
	std::string input = "";
	std::cin >> input;
	std::cout << "Enter in a description of the item.\n";
	std::string descrip = "";
	std::cin >> descrip;
	list.push_back({ input, descrip });
}

void Remove()
{
	std::cout << "Enter in an item to remove.\n";
	std::string input = "";
	std::cin >> input;

	for (size_t i = 0; i < list.size(); i++)
	{
		if (input == std::get<0>(list[i].Get()))
		{
			list.erase(list.begin() + i);
			return;
		}
	}

	std::cout << "There are no items that match those credentials. Failed!";
}

void View()
{

}

int main()
{
	Add();
	Remove();

}