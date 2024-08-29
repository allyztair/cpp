#include <iostream>

int main()
{
    char op;
    double result;
    double num1;
    double num2;

    std::cout << "******** CALCULATOR ********" << '\n';
    std::cout << "Enter the operator (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter your first number: ";
    std::cin >> num1;
    std::cout << "Enter your second number: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "the sum is: " << result << '\n';
        break;
    case '-':
        result = num1 - num2;
        std::cout << "the difference is: " << result << '\n';
        break;
    case '*':
        result = num1 * num2;
        std::cout << "the product is: " << result << '\n';
        break;
    case '/':
        result = num1 / num2;
        std::cout << "the quotient is: " << result << '\n';
        break;
    default:
        std::cout << "Invalid operator!" << '\n';
        break;
    }

    std::cout << "****************************";

    return 0;
}