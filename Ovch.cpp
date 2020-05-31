#pragma once
#include "Ovch.h"
#include <string>
#include <iostream>

void Ovch::get()
{
	Sob::get();
	ovchar = "овчарка";
}
void Ovch::print()
{
	Sob::soba();
	std::cout << ovchar << std::endl;
}

