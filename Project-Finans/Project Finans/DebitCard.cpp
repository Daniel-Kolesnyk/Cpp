#include "DebitCard.h"

DebitCard::DebitCard()
{
	money = 0;
}

DebitCard::DebitCard(const DebitCard&& obj)
{
	history = obj.history;
	money = obj.money;
}

DebitCard::DebitCard(string path)
{
	loading(path);
}