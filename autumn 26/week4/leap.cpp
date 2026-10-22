#include <iostream>
#include <cmath>
bool leap(int yr){
    if (yr%4==0){
        if (yr%100 == 0){
            if (yr%400 == 0){
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}

int main(){
    int yr;
    std::cout<<"enter year:"<<std:: endl;
    std::cin>>yr;
    std::cout<<leap(yr);
}