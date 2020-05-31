#pragma once
#include "Sob.h"
#include <string>

class Ovch : public Sob
{
private:
    std::string ovchar;
public:
    void get();
    void print() override;
};
