//
// Created by Zak Beach on 10/1/21.
//

#ifndef ROMANNUMERALS_ROMANNUMERALS_H
#define ROMANNUMERALS_ROMANNUMERALS_H
#include <unordered_map>
#include <string>
class RomanNumerals
{
private:
    // Create two map classes to hold the values of roman Numerals and integers to Roman Numerals
    std::unordered_map<char, int> numeralToInt;
    std::string numeral;

private:
    //private functions that will check each numeral to see how many of that numeral will need to be appended to the string
    void M(int &input);
    void CM(int &input);
    void D(int &input);
    void CD(int &input);
    void C(int &input);
    void XC(int &input);
    void L(int &input);
    void XL(int &input);
    void X(int &input);
    void IX(int &input);
    void V(int &input);
    void IV(int &input);
    void I(int &input);

public:
    //constructor that populated the two map classes
    RomanNumerals(){populateMap();};
    //function to populate the map clases;
    void populateMap();
    //function to convert from roman Numeral to decimal
    int convertNumeral(const std::string &input);
    //function to convert from decimal to roman numeral
    std::string convertDecimal(int input);

};


#endif //ROMANNUMERALS_ROMANNUMERALS_H
