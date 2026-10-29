#include <iostream>
#include <vector>

std::vector<double> v;
int min_vector_element(const std::vector<double>& vin){
    double test = vin[0];
    int ind = 0;
    for (int i=1;i<vin.size();i++){
        if (vin[i]<test){
            test = vin[i];
            ind = i;
        }
    }
    return ind;


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

    std::cout <<"the smallest element is at: "<<min_vector_element(v);

    

}