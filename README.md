# RomanNumeral
This program can be ran with the command 'g++ main.cpp RomanNumeral.cpp' but I have included the .exe version so that can be ran easily.

#Converting from Roman Numerals to Decimal

This solution was fairly easy all I had to do first was create an unordered map that would keep the roman numerals and their corresponding values stored. I used an unordered map because the time complexity of a lookup is 0(N). My function first will traverse the string it will first look for the case where the current value of the character is less than the one that proceeds it. In this case subtract the value of the next roman numeral by the current roman numeral and increment i and move on to the next part of the function. I used an integer value to hold the value I was getting from each character of the Roman Numerals. At the end of the function it returns this integer value

#Converting from Decimal to Roman Numerals.

This part I found to be a bit more tricky. There are a lot of cases where there will be an odd roman numeral pairring such as IX. For this I decided to break the problem up into smaller functions. Each would take the number that the function received as input and then it would see if it could subtract it by the number the roman numeral represented such as "input - 1000" and get a number greater than or equal to zero. In this case it would push to the string I have in the class called numeral and then it would subtract the input. It would keep looping through until it could no longer subtract that number. At the end it would return the string I had created for output. The order of the functions ensures that the output will not output an incorrect roman numeral
