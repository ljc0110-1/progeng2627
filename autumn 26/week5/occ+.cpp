#include <iostream>
#include <vector>

std::vector<int> v;
std::vector<int> ind;


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
    std::cout<<"enter s. \n";
    int filter;
    std::cin>>filter;
    int counter = 0;
    for (int i=0;i<n;i++){
        
        if (v[i]==filter){
            counter ++;
            ind.push_back(i);
        }
        
    }
    
    std::cout<<"there are "<<counter<<" occurances of "<<filter<<" at: \n";
    for (int i=0;i<ind.size();i++){
        std::cout<<ind[i]<<"\n";
    }

}
