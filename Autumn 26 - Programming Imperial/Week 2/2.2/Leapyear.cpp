#include <iostream>

int main(){
    int y, a, b, c;

    std::cout << "Please enter your year" << std::endl;
    std::cin >> y;

    a = y % 400;
    b = y % 100;
    c = y % 4;

    if((c == 0) && (b != 0)){
        std::cout << "Your year is a leap year" << std::endl;
    }

    else if ((c == 0) && (b == 0)){
        if (a + b == 0){
            std::cout << "This is a leap year" << std::endl;

        }
        else{
            std::cout << "Your year is not a leap year" << std::endl;
        }
       
    }

}


    