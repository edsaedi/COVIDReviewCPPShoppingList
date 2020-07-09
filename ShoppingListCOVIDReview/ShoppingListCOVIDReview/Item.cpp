#include "Item.h"

//Item::Item()
//{
//	itemName = "";
//	itemName = "";
//}
//
//Item::Item(std::string itemName, std::string itemDescription)
//{
//	this.itemName = itemName;
//}

std::tuple<std::string, std::string> Item::Get()
{
	return std::tuple<std::string, std::string>(name, description);
}
