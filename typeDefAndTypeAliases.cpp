    /* typedef - reserved keyword used to create an additional name (alias) for another data type.
        New identifier for an existing type. 
        Helps with readability and reduces typos. */

#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
// typedef std::string text_t;
// typedef int number_t;
using text_t = std::string;
using number_t = int;


int main() {

    // pairlist_t pairlist;
    text_t firstName = "Nerisse";
    number_t age = 23;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}