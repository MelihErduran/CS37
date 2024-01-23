#include <iostream>
int main()
{
    std::cout << "---Part 1----------\n\n  *  \n *** \n*****\n";

    int num1 = 17 / 5;
    int num2 = 17 % 5;
    std::cout << "---Part 2----------\n\n";
    std::cout << "17 / 5 is " << num1 << " remainder " << num2 << "\n\n";

    std::cout << "---Part 3----------\n\n";
    std::cout << "Enter the radius of a circle: ";
    int radius;
    float pie{3.14};
    std::cin >> radius;
    std::cout << "Diameter is " << radius * 2 << "\n";
    std::cout << "Circumference is " << 2 * pie * radius << "\n";
    std::cout << "Area is " << pie * radius * radius << "\n";
    return 0;
}