#pragma once
#include "Cat.h"
#include <string>

class Tigr : public Cat
{
private:
    std::string tigros;
public:
    void get();
    void print() override;
};