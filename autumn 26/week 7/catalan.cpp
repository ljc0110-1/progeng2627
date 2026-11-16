#include <iostream>
#include <vector>
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
    int n;

    std::cout << "Enter n: ";
    std::cin >> n;

    std::vector<unsigned long> numbers = catalan_numbers(n);

    for (int i = 0; i < numbers.size(); i++) {
        std::cout << "C" << i << " = " << numbers[i] << std::endl;
    }

    return 0;
}