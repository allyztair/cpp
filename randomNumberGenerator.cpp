/*  pseudo-random = NOT truly random (but close) */
#include <iostream>

int main()
{

    srand(time(NULL)); // seed-random

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;
    std::cout << num1 << ' ' << num2 << ' ' << num3;

    return 0;
}