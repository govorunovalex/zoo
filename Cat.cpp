#include "Cat.h"

void Cat::get()
{
    Zoo::get();
    cate = "�����";
}
void Cat::cats()
{
    Zoo::zoop();
    std::cout << cate << std::endl;
}
