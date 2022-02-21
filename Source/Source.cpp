#include <iostream>
#include "c_Bill.h"

int main()
{
    c_Bill* bill = new c_Bill(5, 561561, 2017, "GRN", "Ukraine", 15, 5, 15);
    std::cout<<bill->toString();
    delete bill;
}