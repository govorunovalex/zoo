#include "Tigr.h"


void Tigr::get()
{
	Cat::get();
	tigros = "тигры";
}
void Tigr::print()
{
	Cat::cats();
	std::cout << tigros << std::endl;
}
