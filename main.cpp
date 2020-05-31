#include<iostream>

#include "Zoo.h"

#include "Cat.h"
#include "Tigr.h"
#include "Lev.h"
#include "Pant.h"
#include "Sob.h"
#include "Ovch.h"







int main()
{
    setlocale(0, "Russian");

    Ovch ov;
    Lev le;
    Tigr ti;
    Pant pa;




    int a;
    std::cin >> a;
    if (a == 1)
    {
        ti.get();
        ti.print();
    }

    if (a == 2)
    {
        le.get();
        le.print();
    }
    if (a == 3)
    {
        pa.get();
        pa.print();
    }
    if (a == 4)
    {
        ov.get();
        ov.print();
    }


    std::cout << "\n Polymorph:\n";
    const int n = 4;
    Zoo* animals[n];
    animals[0] = &ti;
    animals[1] = &le;
    animals[2] = &pa;
    animals[3] = &ov;

    ti.get();
    le.get();
    pa.get();
    ov.get();

    for (int i = 0; i < n; ++i) {
        animals[i]->print();
    }
    return 0;
}

