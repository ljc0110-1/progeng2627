#include <iostream>

int main() {
    bool valid_x= false;
    bool valid_y = false;
    int x_pos;
    int y_pos;
    
    while (!valid_x){
        std::cout<<"enter x coordinate of the knight from 0-7: "<< std::endl;
        
        std::cin >> x_pos; 
        if (x_pos >= 0 && x_pos<=7)
        {
            valid_x = true;
        
        }
        else{
            std::cout<<"x coordinate of the knight must be from 0-7: "<< std::endl;
        }
    }
    while (!valid_y){
        std::cout<<"enter y coordinate of the knight from 0-7: "<< std::endl;
        
        std::cin >> y_pos; 
        if (y_pos >= 0 && y_pos<=7)
        {
            valid_y = true;
        
        }
        else{
            std::cout<<"y coordinate of the knight must be from 0-7: "<< std::endl;
        }
    }

    if (x_pos <= 5){
        if (y_pos <= 6){
            std::cout<< (x_pos+2)<<","<<(y_pos+1)<< "is a valid move" << std::endl;
        }
        if (y_pos >= 1){
            std::cout<< (x_pos+2)<<","<<(y_pos-1)<< "is a valid move" << std::endl;
        }
    }

    if (x_pos <= 6){
        if (y_pos <= 5){
            std::cout<< (x_pos+1)<<","<<(y_pos+2)<< "is a valid move" << std::endl;
        }
        if (y_pos >= 2){
            std::cout<< (x_pos+1)<<","<<(y_pos-2)<< "is a valid move" << std::endl;
        }
    }

    if (x_pos >= 2){
        if (y_pos <= 6){
            std::cout<< (x_pos-2)<<","<<(y_pos+1)<< "is a valid move" << std::endl;
        }
        if (y_pos >= 1){
            std::cout<< (x_pos-2)<<","<<(y_pos-1)<< "is a valid move" << std::endl;
        }
    }

    if (x_pos >= 1){
        if (y_pos <= 5){
            std::cout<< (x_pos-1)<<","<<(y_pos+2)<< "is a valid move" << std::endl;
        }
        if (y_pos >= 2){
            std::cout<< (x_pos-1)<<","<<(y_pos-2)<< "is a valid move" << std::endl;
        }
    }


}