#include <fstream>
#include <string>
using namespace std;
#include <cstdlib>
#include <vector>
#include <iostream>
#include<cmath>

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
void converstion(int base, int num, std::vector <int>& digits){
    int dig = max_digits(base, num);
    for (int i=dig-1;i>=0;i--){
        int j = num/pow(base,i);
        std::cout<<"a digit is"<<j<<"\n";
        digits.push_back(j);
        num -= j*(pow(base,i));
        std::cout<<"remianing"<<num<<"\n";
    }

}

int check_base (int base){
    if (base>16||base<2){
        return 0;
    
    }
    std::cout<<"base pass\n";
    return 1;
}
void print_vec_as_num(const std:: vector<int>& digits){
    for (int i=0;i<digits.size();i++){
        
        int digit = digits[i];
        if (digit==10){
            std::cout<<"A";
        }
        else if (digit==11){
            std::cout<<"B";
        }
        else if (digit==12){
            std::cout<<"C";
        }
        else if (digit==13){
            std::cout<<"D";
        }
        else if (digit==14){
            std::cout<<"E";
        }
        else if (digit==15){
            std::cout<<"F";
        }
        else {
            std::cout<<digit;
        }

    }
    std::cout<<"\n";
}
int main(){
    int num, base;
    int valid = 0;
    //std::cout<<"enter number in decimal\n";
    while (valid == 0){
        std::cout<<"enter number in decimal\n";
        std::cin>>num;
        std::cout<<"enter base from 2 to 16\n";
        std::cin>>base;
        valid = check_base(base);
        if (valid ==0){
            std::cout<<"base invalid\n";
        }
        std::cout<<"converting \n";
    }
    std::vector <int> digits;

    converstion(base,num, digits);
    print_vec_as_num(digits);
    
    
}