#include <iostream>
#include <cmath>

double fac(int times){
    int sum = 1;
    for (int i=1;i<=times;i++){
        sum *=i;
    }
    return sum;

}

int main(){
    int n;
    std::cout<<"enter the number"<<std::endl;
    std::cin>>n;
    
    std::cout<<"the factorial is: "<<fac(n)<<std::endl;
}