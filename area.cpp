#include <iostream>

int main()
{

    int length;
    int width;
    int area;

    std::cout << "Enter the length of a rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of a rectangle: ";
    std::cin >> width;

    area = length * width;

    std::cout << "The area of the rectangle is " << area << std::endl;

    return 0;
}