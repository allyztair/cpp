#include <iostream>

int main()
{

    double temp;
    char unit;

    std::cout << "************ Temperature Conversion ************\n";
    std::cout << "C is for Celsius; F is for Fahrenheit\n";
    std::cout << "Which unit would you like to convert?: ";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the degree Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "It's Fahrenheit is: " << temp << "F" << '\n';
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the degree Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "It's Celsius is: " << temp << "C" << '\n';
    }
    else
    {
        std::cout << "Please enter a valid response!\n";
    }

    std::cout << "************************************************";

    return 0;
}