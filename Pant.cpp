#include "Pant.h"

void Pant::get()
{
	Cat::get();
	panter = "пантеры";
}
void Pant::print()
{
	Cat::cats();
	std::cout << panter << std::endl;

}
