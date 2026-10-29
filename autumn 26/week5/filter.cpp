#include <iostream>
#include <vector>

std::vector<int> v;

int main(){
    int n;
    std::cout<<"enter the nuber of inputs.\n";
    std::cin>>n;
    for (int i=0;i<n;i++){
        int dummy;
        std::cout<<"enter a number: \n";
        std::cin>>dummy;
        v.push_back(dummy);
    }
    std::cout<<"enter filter. \n";
    int filter;
    std::cin>>filter;
    for (int i=0;i<n;i++){
        if (v[i]<filter){
            std::cout<<v[i]<<" ";
        }
        
    }
}