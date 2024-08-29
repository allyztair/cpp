#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {

    std::string name;
    int age;


    std::cout << "What is your fullname?: ";
    std::getline(std::cin >> std::ws, name); //getline function to get the whole string that contain whitespaces. ws:whitespace

    std::cout << "How old are you?: ";
    std::cin >> age;

    std::cout << "Hi, " << name << "!" << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}