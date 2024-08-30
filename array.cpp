#include <iostream>

int main()
{

    // array = a data structure that can hold mulitple values
    //         values are accessed by an index number
    //         "kind of like a variable that holds multiple values"

    std::string cars[] = {"Corvette", "Civic", "Jimny"};

    cars[2] = "Camry";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}