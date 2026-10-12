#include <iostream>
#include <cmath>

int main() {
    double side1, side2, side3;

    std::cout << "Enter sidelength 1: " << std::endl;
    std::cin >> side1;
    std::cout << "Enter sidelength 2: " << std::endl;
    std::cin >> side2;
    std::cout << "Enter sidelength 3: " << std::endl;
    std::cin >> side3;

    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        std::cout << "Error: All sides must be positive numbers." << std::endl;
        return 1;
    }
    else if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1) {
        std::cout << "Error: The given sides do not form a valid triangle." << std::endl;
        return 1;
    }
    else {
        if (side1 == side2 || side2 == side3 || side1 == side3) {
            if (side1 == side2 && side2 == side3) {
                std::cout << "The triangle is equilateral." << std::endl;
            } else {
                std::cout << "The triangle is isosceles." << std::endl;
            }
        }
        else {
            std::cout << "The triangle is scalene." << std::endl;
        }
        double perimeter = side1 + side2 + side3;
        double s = perimeter / 2; // semi-perimeter
        double area = sqrt(s * (s - side1) * (s - side2) * (s - side3)); // Heron's formula

        std::cout << "The area of the triangle with sides " << side1 << ", " << side2 << ", and " << side3 << " is " << area << std::endl;
        std::cout << "The perimeter of the triangle with sides " << side1 << ", " << side2 << ", and " << side3 << " is " << perimeter << std::endl;

        return 0;
    }


   
}