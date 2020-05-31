#include "Sob.h"
#include <iostream>

void Sob::get()
{
	Zoo::get();
	sobaca = "собаки";
}
void Sob::soba()
{
	Zoo::zoop();
	std::cout << sobaca << std::endl;
}
