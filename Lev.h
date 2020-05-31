#pragma once
#include "Cat.h"
#include <string>

class Lev : public Cat
{
private:
    std::string leo;
public:
    void get();
    void print() override;
};
