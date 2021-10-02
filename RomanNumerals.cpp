//
// Created by Zak Beach on 10/1/21.
//

#include "RomanNumerals.h"
void RomanNumerals::populateMap()
{

    //Populates the map of roman numerals to Integers
    numeralToInt['I'] =1;
    numeralToInt['V']= 5;
    numeralToInt['X'] = 10;
    numeralToInt['L'] = 50;
    numeralToInt['C'] = 100;
    numeralToInt['D'] = 500;
    numeralToInt['M'] = 1000;
}

int RomanNumerals::convertNumeral(const std::string& input)
{
    // integer value that will be returned
    int value = 0;
    //iterate over the string to get each character of the string
    for(size_t i =0; i < input.length(); ++i)
    {
        // First this checks to make sure that the string will not try and reach something that is out of bounds, then it will compare the first character to the next character to see if its value is less than the next character
        if(i != input.length() -1 && numeralToInt[input[i]] < numeralToInt[input.at(i+1)])
        {
                value += (numeralToInt[input.at(i+1)] - numeralToInt[input.at(i)]);
                i++;
        }
        else
            value += numeralToInt[input.at(i)];
    }
    return value;
}
// Case for 1000
void RomanNumerals::M(int &input)
{
    while(input - 1000 >= 0)
    {
        numeral.push_back('M');
        input -= 1000;;
    }
}
// Case for 900
void RomanNumerals::CM(int &input)
{
    while(input - 900 >= 0)
    {
        numeral.push_back('C');
        numeral.push_back('M');
        input -=900;
    }
}
//Case for 500
void RomanNumerals::D(int &input)
{
    while(input - 500 >= 0)
    {
        numeral.push_back('D');
        input-=500;
    }
}
void RomanNumerals::CD(int &input)
{
    while(input - 400 >= 0)
    {
        numeral.push_back('C');
        numeral.push_back('D');
        input -= 400;
    }
}

void RomanNumerals::C(int &input)
{
    while(input - 100 >= 0)
    {
        numeral.push_back('C');
        input -=100;
    }
}

void RomanNumerals::XC(int &input)
{
    while(input - 90 >= 0)
    {
        numeral.push_back('X');
        numeral.push_back('C');
        input -=90;
    }
}

void RomanNumerals::L(int &input) {
    while(input - 50 >= 0)
    {
        numeral.push_back('L');
        input-=50;
    }
}

void RomanNumerals::XL(int &input)
{
    while (input - 40 >= 0)
    {
        numeral.push_back('X');
        numeral.push_back('L');
        input -=40;
    }
}

void RomanNumerals::X(int &input)
{
    while(input - 10 >= 0)
    {
        numeral.push_back('X');
        input-=10;
    }
}

void RomanNumerals::IX(int &input)
{
    while(input - 9 >= 0)
    {
        numeral.push_back('I');
        numeral.push_back('X');
        input -= 9;
    }
}

void RomanNumerals::V(int &input)
{
    while(input - 5 >= 0)
    {
        numeral.push_back('V');
        input-=5;
    }
}
void RomanNumerals::IV(int &input)
{
    while(input - 4 >= 0)
    {
        numeral.push_back('I');
        numeral.push_back('V');
        input -= 4;
    }
}

void RomanNumerals::I(int &input)
{
    while(input - 1 >= 0)
    {
        numeral.push_back('I');
        input-=1;
    }
}
// This function will call all of the functions that will build the string.
std::string RomanNumerals::convertDecimal(int input)
{
    while(input > 0)
    {
        M(input);
        CM(input);
        D(input);
        CD(input);
        C(input);
        XC(input);
        L(input);
        XL(input);
        X(input);
        IX(input);
        V(input);
        IV(input);
        I(input);
    }

    return numeral;
}

