#include <iostream>
#include <vector>

std::vector<int> v1;
std::vector<int> v2;
std::vector<int> v3;

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout){
    for (int i=0;i<vin1.size();i++){
        vout.push_back(vin1[i]);
    
    }
    for (int i=0;i<vin2.size();i++){
        vout.push_back(vin2[i]);
    
    }
}
void input_function(std::vector<int>& vin){
    int n;
    std::cout<<"enter the nuber of inputs.\n";
    std::cin>>n;
    for (int i=0;i<n;i++){
        int dummy;
        std::cout<<"enter a number: \n";
        std::cin>>dummy;
        vin.push_back(dummy);
    }
}
int main(){
    input_function(v1);
    input_function(v2);
    append_vectors(v1,v2,v3);
    for (int i=0;i<v3.size();i++){
        std::cout<<v3[i]<<" ";
    }




}