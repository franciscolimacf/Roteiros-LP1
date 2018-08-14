#include <iostream>
#include "data.h"

int main()
{
    Data data1(31,12,2018);



    std::cout<< data1.getDia()<< "/" << data1.getMes() << "/" << data1.getAno() <<std::endl;

    data1.avancaDia();

    std::cout<< data1.getDia()<< "/" << data1.getMes() << "/" << data1.getAno() <<std::endl;

    return 0;
}
