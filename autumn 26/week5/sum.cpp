#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    int n;
    std::cout<<"enter the nuber of inputs.\n";
    std::cin>>n;
    for (int i=0;i<n;i++){
        int dummy;
        std::cout<<"enter a number: \n";
        std::cin>>dummy;
        v.push_back(dummy);
    }
    

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}