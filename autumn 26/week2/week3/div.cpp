#include <iostream>

int main(){

    
    int counter = 0;
    double num;
    std:: cout <<"enter number"<< std:: endl;
    std:: cin >> num;
    double div;
    std:: cout <<"enter divisor"<< std:: endl;
    std:: cin >> div;
    while (num > div){
        
        num -= div;
        counter += 1;
        
        
        std:: cout << "number so far is:"<<num<<std::endl;
        if (num>div){
            std:: cout << num<< ">" <<div <<"so we subtract"<<div<<std::endl;
            
        }
        else{
            std:: cout << "remainder is:"<<num<<std::endl;
            std:: cout << "result is:"<<counter<<std::endl;
        }
        
        
    }

}