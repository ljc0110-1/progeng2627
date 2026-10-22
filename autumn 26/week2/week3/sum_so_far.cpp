#include <iostream>

int main(){

    double sum = 0;
    double n;
    while (n!=0){
        std:: cout <<"enter number, enter 0 to terminate"<< std:: endl;
        std:: cin >> n;
        sum += n;
        std:: cout << "sum so far is:"<<sum<<std::endl;
    }

}