#pragma once
#include "Cat.h"
#include <string>

class Pant : public Cat
{
private:
	std::string panter;
public:
	void get();
	void print() override;
};