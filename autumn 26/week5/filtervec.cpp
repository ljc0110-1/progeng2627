#include <iostream>
#include <vector>

std:: vector<double> v1;
std:: vector<double> v2;

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for (int i=0;i<vin.size();i++){
        if (vin[i]<t){
            vout.push_back(vin[i]);
        }
    }
}



void input_function(std::vector<double>& vin){
    int n;
    std::cout<<"enter the nuber of inputs.\n";
    std::cin>>n;
    for (int i=0;i<n;i++){
        double dummy;
        std::cout<<"enter a number: \n";
        std::cin>>dummy;
        vin.push_back(dummy);
    }
}
int main(){
    
    input_function(v1);
    double t;
    std::cout<< "what is the number you want to filter\n";
    std::cin>>t;
    filter_v(v1,t,v2);
    for (int i=0;i<v2.size();i++){
        std::cout<<v2[i];
    }

}