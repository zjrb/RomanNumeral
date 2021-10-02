#include <iostream>
#include "RomanNumerals.h"
int main()
{
    RomanNumerals test;
    try{
        std::cout << test.convertNumeral("MMMCMXCVII");
    }
    catch(char const* error)
    {
        std::cout << error;
    };
    std::cout << std::endl << test.convertDecimal(3997);

    return 0;
}
