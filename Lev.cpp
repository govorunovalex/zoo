#include "Lev.h"

void Lev::get()
{
	Cat::get();
	leo = "����";
}
void Lev::print()
{
	Cat::cats();
	std::cout << leo << std::endl;
}
