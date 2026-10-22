#include <iostream>
double area (double a, double b){
    return a*b;
}
double prim (double a,double b){
    return 2*(a+b);
}

int main(){
    double a,b;
    std::cout<<"enter number a"<<std::endl;
    std::cin>>a;
    std::cout<<"enter number b"<<std::endl;
    std::cin>>b;
    std::cout<<"area is" <<area(a,b)<<"perimeter is: "<<prim(a,b)<<std::endl;
}