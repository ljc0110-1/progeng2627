#include <iostream>
#include <cmath>

double SP(double n, int times){
    int base = 1;
    for (int i=1;i<=times;i++){
        base*=n;
    }
    return base;

}

int main(){
    double n;
    int k;
    std::cout<<"enter the number"<<std::endl;
    std::cin>>n;
    std::cout<<"enter the number of powers"<<std::endl;
    std::cin>>k;
    std::cout<<"the powers is: "<<SP(n,k)<<std::endl;
}