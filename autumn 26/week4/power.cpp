#include <iostream>
#include <cmath>


int main (){
    double num,power;
    std::cout<<"enter a number"<<std::endl;
    std::cin>> num;
    std::cout<<"enter its power"<<std::endl;
    std::cin>>power;
    std::cout<<num<<" to the power of "<<power<<" is "<<pow(num,power);
}