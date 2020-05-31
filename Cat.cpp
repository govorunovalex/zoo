#include "Cat.h"

void Cat::get()
{
    Zoo::get();
    cate = "кошки";
}
void Cat::cats()
{
    Zoo::zoop();
    std::cout << cate << std::endl;
}
