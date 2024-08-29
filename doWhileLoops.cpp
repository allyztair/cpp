/* do while loop = do some block of code first, THEN repeat again if the condition id true.  */

#include <iostream>

int main()
{
    int number;

    do
    {
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The number is: " << number;
    return 0;
}