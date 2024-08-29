/* Ternary Operator ? = replacement to an if/else statement
                syntax: condition ? expression1 : expression2; */

#include <iostream>

int main()
{

    // int grade;

    // std::cout << "Enter your grade: " << '\n';
    // std::cin >> grade;

    // (grade >= 60) ? std::cout << "You Passed!" : std::cout << "You Failed!";

    bool hungry = false;
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}