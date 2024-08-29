#include <iostream>

int main()
{
    int num;

    std::cout << "Enter a number from 1 to 100: ";
    std::cin >> num;

    if (num % 3 == 0 && num % 5 == 0)
    {
        std::cout << "APLLESORANGES";
    }
    else if (num % 3 == 0)
    {
        std::cout << "APPLES";
    }
    else if (num % 5 == 0)
    {
        std::cout << "ORANGES";
    }
    else
    {
        std::cout << "The number you've entered is not divisible by 3 or 5!";
    }
    return 0;
}