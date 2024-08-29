#include <iostream>

int main()
{
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // if (name.length() > 12)
    // {
    //     std::cout << "Your name can't be over 12 characters";
    // }
    // else
    // {
    //     std::cout << "You're welcome";
    // }

    // if (name.empty())
    // {
    //     std::cout << "You didn't enter your name";
    // }
    // else
    // {
    //     std::cout << "Hello, " << name;
    // }

    // name.clear();
    // std::cout << "Hello " << name;

    // name.append("@gmailcom");
    // std::cout << "You're email address is " << name;

    // std::cout << name.at(0);

    // name.insert(name.length(), "@");
    // std::cout << name;

    // std::cout << name.find(" ");

    name.erase(0, 2);
    std::cout << name;

    return 0;
}