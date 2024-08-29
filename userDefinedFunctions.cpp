#include <iostream>

void happyBirthday(std::string name, int age);

int main()
{
    // function = a block of reusable code.
    std::string name = "Nerisse";

    int age = 23;

    happyBirthday(name, age); // argument

    return 0;
}

void happyBirthday(std::string name, int age) // parameter
{
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear you\n";
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old\n";
}