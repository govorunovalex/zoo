#pragma once
#include "Zoo.h"
#include <string>

class Sob :public Zoo
{
protected:
	std::string sobaca;
public:
	void get();
	void soba();
};