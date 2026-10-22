#include <iostream>
int main(){
    int n = 5, k = 3, r = 0;
    for(int i = 0; i < n + k; i++){
        for(int j = 0; j < i; j++){
            k = k - 1;
            r++;
        }
    }
    std::cout << r << std::endl;
}