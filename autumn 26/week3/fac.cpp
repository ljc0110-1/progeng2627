#include <iostream>

int main(){
    int n;
    int dummy = 1;
    std:: cout <<"enter number:"<<std::endl;
    std:: cin >> n;
    for (int i=1;i<=n;i++){
        dummy *= i;
    }
    std:: cout << dummy << "is the factorial";

}