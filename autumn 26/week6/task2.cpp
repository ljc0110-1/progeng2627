#include <vector>
#include <iostream>
#include<cmath>
#include <fstream>
int max_digits (int base, int num){

    int temp = base;
    int output = 1;
    while (num>=temp){
        output++;
        temp*= base;
    }
    std::cout<<output<<"\n";
    return output;
}
void conversion(int base, int num, std::vector <int>& digits){
    int dig = max_digits(base, num);
    for (int i=dig-1;i>=0;i--){
        int j = num/pow(base,i);
        std::cout<<"a digit is"<<j<<"\n";
        digits.push_back(j);
        num -= j*(pow(base,i));
        std::cout<<"remianing"<<num<<"\n";
    }

}
void calculate (int num, int base){
    std::vector <int> digits;
    conversion(10,num,digits);
    int sum = 0;
    int counter = 0;
    for (int i=digits.size()-1;i>=0;i--){
        sum += digits[counter]*pow(base,i);
        counter ++;
    }
    std::cout<<"the decimal value is: "<<sum<<"\n";

}

int main(){
    int num,base;
    std::cout<<"enter number\n";
    std::cin>>num;
    std::cout<<"enter base\n";
    std::cin>>base;
    calculate (num, base);

}