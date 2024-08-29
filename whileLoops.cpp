#include <iostream>

int main()
{

    std::string name;

    while (name.empty()) // as long as this statement is true, this will execute
    {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }
    std::cout << "Hello, " << name;
    return 0;
}