#pragma once
#include "User.h"

class DebitCard :
    public User
{
public:
    DebitCard();
    DebitCard(string path);
    DebitCard(const DebitCard&& obj);
    ~DebitCard() = default;
};

