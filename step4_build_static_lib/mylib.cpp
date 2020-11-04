#include <iostream>

#include "mylib.h"

A::A(int a)
    :a_(a)
{
}

int ProcessA(const A& a)
{
    std::cout << __PRETTY_FUNCTION__ << " A:" << a.GetA() << std::endl;
    return a.GetA();
}
