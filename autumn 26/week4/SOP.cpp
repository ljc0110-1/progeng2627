#include <iostream>
#include <cmath>

double SOP(double n, int times){
    int sum = 0;
    for (int i=1;i<=times;i++){
        sum += pow(n,i);
    }
    return sum;

}

int main(){
    double n,k;
    std::cout<<"enter the number"<<std::endl;
    std::cin>>n;
    std::cout<<"enter the number of powers"<<std::endl;
    std::cin>>k;
    std::cout<<"the sum of powers is: "<<SOP(n,k)<<std::endl;
}