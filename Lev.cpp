#include "Lev.h"

void Lev::get()
{
	Cat::get();
	leo = "львы";
}
void Lev::print()
{
	Cat::cats();
	std::cout << leo << std::endl;
}
