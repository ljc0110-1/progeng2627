#include <iostream>
int main(){
    double height;
    
    std::cout << "Enter height: "<< std::endl;
    std::cin >> height;
    std::cout << "Enter width: "<< std::endl;
    double width;
    std::cin >> width;
    double area = height * width;
    double perimeter = 2 * (height + width);
    std::cout << "The area of the rectangle with height " << height << " and width " << width << " is " << area << std::endl;
    std::cout << "The perimeter of the rectangle with height " << height << " and width " << width << " is " << perimeter << std::endl;
}