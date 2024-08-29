/* for loops = that will executed a block of code in a spcified amount of time.
    three statements:
        1. counter: int i = 1;
        2. stopping condition: i <= 3;
        3. increment/decremenet: i++/i--;

*/
#include <iostream>

int main()
{

    for (int i = 2; i <= 10; i += 2)
    {
        std::cout << i << "\n";
    }

    std::cout << "Happy New Year";
    return 0;
}