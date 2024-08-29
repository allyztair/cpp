#include <iostream>

int myNum = 3;
void printNum();

int main()
{
    // Local variables = delcared inside a function or block {}
    // Global variables = delcared outside of all functions

    int myNum = 2;
    printNum();
    std::cout << ::myNum << '\n'; // 2 colons before the variable = scope for global variables

    return 0;
}

void printNum()
{
    int myNum = 1;
    std::cout << ::myNum << '\n'; // 2 colons before the variable = scope for global variables
}