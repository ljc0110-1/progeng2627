#include <fstream>
#include <string>
using namespace std;
#include <cstdlib>
#include <vector>
#include <iostream>



int main(){
    std::ifstream infile; 
    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    
    infile.open(inputfilename);
    
    std::cout<<"file open \n";

    std::vector<string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
       
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 
    std:: ofstream outfile;
    outfile.open("output.txt");
    if(!outfile.is_open()){
            std::cout << "error opening file" << std::endl;
            return EXIT_FAILURE;
    }
    std::cout<<"skjfskjdl\n";
    for (int i=v.size()-1;i>=0;i--){
        
        std::cout << v[i]<<"\n";
        
        
        

        outfile << v[i] << std::endl;
        
    }
    outfile.close();

}