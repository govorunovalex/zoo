#pragma once
#include "Zoo.h"
#include <string>
#include <iostream>

class Cat :public Zoo
{
protected:
    std::string cate;
public:
    void get();
    void cats();
};