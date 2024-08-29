/* Type Conversion = conversion of a value of one data type to another 
    Implicit = automatic
    Explicit = precede value with new data type (int) */

#include <iostream>

int main() {

    // char x = 100;

    // std::cout << x << '\n';
    // std::cout << char (100);

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}