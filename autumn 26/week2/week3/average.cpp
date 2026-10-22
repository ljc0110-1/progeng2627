#include <iostream>

int main(){

    double sum = 0;
    int counter = 0;
    double n;
    while (n!=0){
        counter += 1;
        std:: cout <<"enter number, enter 0 to terminate"<< std:: endl;
        std:: cin >> n;
        if (n == 0){
            return 0;
        }
        sum += n;
        double ave = sum/counter;
        std:: cout << "average so far is:"<<ave<<std::endl;
        
    }

}