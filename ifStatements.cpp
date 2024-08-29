/* If statements = do something if a condition is true. If not, then don't do it.*/

#include <iostream>

int main()
{

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "You are on your legal age!";
    }
    else
    {
        std::cout << "You are a minor!";
    }

    return 0;
}