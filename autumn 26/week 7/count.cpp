#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cstdlib>
void next_number (std::vector <unsigned long> &catalan){
    int num=0;
    for (int i=0; i<catalan.size();i++){
        num += catalan[i]*catalan[catalan.size()-i-1];
    }
    catalan.push_back(num);
}
std::vector<unsigned long> catalan_numbers(int n){
    std:: vector <unsigned long> catalan {1};
    for (int i=0; i<n;i++){
        next_number(catalan);
    }
    return catalan;

}




int main() {
    std::ifstream infile; 
    infile.open("expression.txt");
    std::ofstream outfile;
    outfile.open("expressions_out.txt");

    if(!infile.is_open()||!outfile.is_open()){ // note the !: "if the file is not open"...
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }
    std::string expression;
    while (infile>>expression){
        outfile<<expression<<"      ";
        int counter =0;
        for (int i=0;i<expression.length();i++){
            char a = expression[i];
            if (a=='+'||a=='-'||a=='/'||a=='*'){
                counter++;
            }
        }
        int num =0;
        std::vector<unsigned long> catalan_number = catalan_numbers(counter);
        num = catalan_number[catalan_number.size()-1];

        outfile<<num<<std::endl;
        
    }
    infile.close();
    outfile.close();

}