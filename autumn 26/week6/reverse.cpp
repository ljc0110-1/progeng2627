#include <fstream>
#include <string>
using namespace std;
#include <cstdlib>
#include <vector>
#include <iostream>



int main(){
    std::ifstream infile; 
    infile.open("input.txt");
    std::cout<<"file open \n";

    std::vector<string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        std::cout<<"pushed \n"<<v.size();
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 
    std::cout<<"skjfskjdl\n";
    for (int i=v.size()-1;i>=0;i--){
        std::cout<<"attemt output \n";
        std::cout << v[i]<<"\n";
    }

}