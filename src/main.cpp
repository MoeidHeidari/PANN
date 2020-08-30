

#include <iostream>
#include <Foundation/Types/Types.hpp>
#include <Foundation/Strings/String.hpp>
using namespace PANN::TYPES;

int main(int, char**) 
{
    PANN_UInt8 x='B';

    PANNString str;
    str.print_a_string();
    
    
    std::cout << "\nHello, world!"<<x<<std::endl;

    return 0;
}
