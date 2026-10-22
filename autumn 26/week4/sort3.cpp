#include <iostream>

void myswap(double&a, double&b){
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}
void sort_two_numbers(double& a, double& b){
    if (b<=a){
        myswap(a,b);
    }
}
void sort_three(double& a, double& b, double&c){
    for (int i=0; i<2; i++){
        sort_two_numbers(a,b);
        sort_two_numbers(b,c);
    }
}

int main(){
    double a,b,c;
    std::cout<<"enter number a"<<std::endl;
    std::cin>>a;
    std::cout<<"enter number b"<<std::endl;
    std::cin>>b;
    // sort_two_numbers(a,b);
    // std::cout<<"the sorted values are"<<a<<b<<std::endl;
    
    std::cout<<"enter number c"<<std::endl;
    std::cin>>c;
    sort_three(a,b,c);
    std::cout<<"the sorted values are"<<a<<b<<c<<std::endl;
}