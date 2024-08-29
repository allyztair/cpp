#include <iostream>

int main()
{

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "----- NUMBER GUESSING GAME -----\n";

    do
    {
        std::cout << "Enter the number (1-100): ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "TOO HIGH\n";
        }
        else if (guess < num)
        {
            std::cout << "TOO LOW\n";
        }
        else
        {
            std::cout << "CORRECT! # of tries: " << tries << '\n';
        }

    } while (guess != num);
    return 0;
}