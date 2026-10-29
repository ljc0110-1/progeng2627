#include <iostream>
#include <vector>

std::vector<double> v;
int element_finder(const std::vector<double>& vin, int n){
    
    for (int i=1;i<vin.size();i++){
        if (vin[i]==n){
            return i;
        }
    }
    return -1;


}
int main(){
    int n;
    std::cout<<"enter the nuber of inputs.\n";
    std::cin>>n;
    for (int i=0;i<n;i++){
        double dummy;
        std::cout<<"enter a number: \n";
        std::cin>>dummy;
        v.push_back(dummy);
    }
    for (int i=0;i<n;i++){
        std::cout<<v[i];
    }
    std::cout<<"\n";
    if (v.size()==0){
        std::cout<<"the vector has length zero";
        return 1;
    }
    int a;
    std::cout<<"enter the number you want to find. \n";
    std::cin>>a;

    std::cout <<"the element is at: "<<element_finder(v, a)<<"\n -1 means there isn't such a value";

    

}