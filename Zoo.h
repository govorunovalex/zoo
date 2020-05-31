#pragma once

#include <string>

class Zoo
{
protected:
    std::string sdf;
public:
    void get();
    void zoop();
    virtual void print() = 0;

};