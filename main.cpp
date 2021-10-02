#include <iostream>
#include "RomanNumerals.h"
int main()
{
    RomanNumerals test;
    std::string ans = "";
    while (ans != "Q") {
        std::cout << "To Convert a number to Roman Numeral please type 'C' " << std::endl
                  << "To convert a Roman Numeral to a number please type 'X' " << std::endl
                  << "To exit please type 'Q'" << std::endl;
        std::cin >> ans;
        if (ans == "C")
        {
            int num = 0;
            std::cout << "Please enter a number  NUMBER CANNOT BE GREATER THAN 3999 or a NEGATIVE NUMBER \n";
            std::cin >> num;
            std::cout << "Answer is : " << test.convertDecimal(num) << std::endl;
        }
        else if (ans == "X")
        {
            std::string numeral;
            std::cout << "Please enter a valid Roman Numeral \n";
            std::cin >> numeral;
            std::cout << "Answer is : " << test.convertNumeral(numeral) << std::endl;
        }
        else if (ans != "C" && ans != "X" && ans != "Q")
        {
                std::cout << "INPUT IS INVALID PLEASE ENTER A VALID INPUT" << std::endl;
        }
        }

    return 0;
}
