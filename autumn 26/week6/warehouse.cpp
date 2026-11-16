#include <fstream>
#include <string>
using namespace std;
#include <cstdlib>
#include <vector>
#include <iostream>

int search_vector(std::string s, const std::vector<std::string>& vin){
    for (int i=0;i<vin.size();i++){
        if (s==vin[i]){
            return 1;
        }
    }
    return 0;

}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){

    for (int i=0;i<vin1.size();i++){
        vout.push_back(vin1[i]);
    }
    for (int i=0;i<vin2.size();i++){
        if (search_vector(vin2[i],vout)==0){
            vout.push_back(vin2[i]);
        }

    }

}
void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i=0;i<vin2.size();i++){
        if (search_vector(vin2[i],vin1)==1){
            vout.push_back(vin2[i]);
        }

    }
}



void printfile(std::vector<std::string>& vout,string filename){
    std:: ofstream outfile;
    outfile.open(filename);
    if(!outfile.is_open()){
            std::cout << "error opening file" << std::endl;
            return;
    }
    std::cout<<"skjfskjdl\n";
    for (int i=0;i<vout.size();i++){
        
        
        
        

        outfile << vout[i] << std::endl;
        
    }
    outfile.close();
}
void getvec (std::vector<std::string>& vout, string inputfilename){
    std::ifstream infile; 
    infile.open(inputfilename);
    
    std::cout<<"file open \n";

   

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return;
    }

    string tmp;

    while(infile >> tmp){
        vout.push_back(tmp); 
       
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 

}

int main(){
    std::vector <string> vin1;
    std::vector <string> vin2;
    std::vector <string> vout1;
    std::vector <string> vout2;
    getvec(vin1,"barn.txt");
    getvec(vin2, "stash.txt");
    union_vector(vin1,vin2,vout1);
    intersection_vector(vin1,vin2,vout2);
    printfile(vout1,"union.txt");
    printfile(vout2,"intersection.txt");


}