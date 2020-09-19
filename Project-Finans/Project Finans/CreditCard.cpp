#include "CreditCard.h"

CreditCard::CreditCard()
{
	money = 0;
}

CreditCard::CreditCard(string path)
{
	loading(path);
}

CreditCard::CreditCard(const CreditCard&& obj)
{
	history = obj.history;
	money = obj.money;
}