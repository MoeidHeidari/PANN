#include <iostream>
#include <boost/math/special_functions/sign.hpp>
#include "lib/include/Sample.h"

int main(int, char**) 
{
    std::cout << copysign(4.9, 7.9) << std::endl;
    
    Sample s;
    s.testFunction();
    std::cout << "Hello, world!\n";
}
