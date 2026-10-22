#include <iostream>

double two_max(double n, double k){
    if (n>=k){
        return n;
    }
    return k;
}
double three_max(double a,double b,double c){
    if (a>=b&&a>=c){
        return a;
    }
    if (b>=a&&a>=c){
        return b;
    }
    return c;
}


int main(){
    double a,b,c;
    std::cout<<"enter number a"<<std::endl;
    std::cin>>a;
    std::cout<<"enter number b"<<std::endl;
    std::cin>>b;
    std::cout<<"enter number c"<<std::endl;
    std::cin>>c;
    std::cout<<"max of a and b is: "<<two_max(a,b)<<std::endl;
    std::cout<<"max of a, b, and c is: "<<three_max(a,b,c)<<std::endl;
    
}