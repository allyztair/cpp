#include <iostream>

int main()
{
    // sizeof() = determines the size in bytes of a: variable, data type, class, objects, etc.

    std::string name = "Nerisse";
    double gpa = 2.5;
    char grade = 'F';
    bool student = false;
    char grades[] = {'A', 'B', 'C', 'D'};
    std::string students[] = {"Spongebob", "Patrick", "Sandy"};

    std::cout << sizeof(name) << " bytes\n";
    std::cout << sizeof(gpa) << " bytes\n";
    std::cout << sizeof(grade) << " byte\n";
    std::cout << sizeof(student) << " byte\n";
    std::cout << sizeof(grades) << " byte\n";
    std::cout << sizeof(students) / sizeof(std::string) << " elements\n";

    return 0;
}