#include <iostream>

bool leap(int yr){
    if (yr%4==0){
        if (yr%100 == 0){
            if (yr%400 == 0){
                return true;
            }
            return false;
        }
        return true;
    }
    return false;
}
bool large(int month){
    if (month<=7){
        if (month%2==1){
            return true;
        }
    }
    else if(month%2==1){
        return false;
    }
    return true;
}
void next_date(int& d2, int& m2, int& y2){
    if (d2<28){
        d2 += 1;
        return;
    }
    if (d2==31){
        d2 = 1;
        if (m2 == 12){
            m2 =1;
            y2 += 1;
            return;
        }
        m2 += 1;
    }
    if (d2 == 28){
        if (m2 == 2){
            if (leap(y2)){
                d2+=1;
                return;
            }
            else{
                m2 ++;
                d2 = 1;
                return;
            }
            
        }
        d2 += 1;
        return;

    }
    if (d2 == 29){
        if (m2 == 2){
            d2 = 1;
        
            m2++;
            return;
        }
        d2 ++;
        return;
    }
    if (d2 == 30){
        if (large(m2)){
            d2++;
            return;
        }
        d2 = 1;
        m2++;
    }


}

int main(){
    int d,m,y;
    std::cout<<"enter day d"<<std::endl;
    std::cin>>d;
    std::cout<<"enter month m"<<std::endl;
    std::cin>>m;
    std::cout<<"enter number y"<<std::endl;
    std::cin>>y;
    next_date(d,m,y);
    std::cout<<"the next date is:"<<d<<"/"<<m<<"/"<<y<<std::endl;
}