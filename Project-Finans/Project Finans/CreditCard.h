#pragma once
#include "User.h"

class CreditCard :
    public User
{
public:
    CreditCard();
    CreditCard(string path);
    CreditCard(const CreditCard&& obj);
    ~CreditCard() = default;
};