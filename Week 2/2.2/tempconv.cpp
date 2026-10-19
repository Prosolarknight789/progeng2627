#include <iostream>

int main(){

    double tempin, tempout;
    std::string unitin, unitout;

    std::cout << "Enter your temperature " << std::endl;
    std::cin >> tempin;
    
    std::cout << "Enter your units " << std::endl;
    std::cin >> unitin;

    if ((unitin == "C") || (unitin == "c")){
        tempout = (tempin * 1.8) + 32;
        unitout = "F";
        std::cout << tempout << unitout << std::endl;
    }

    else if ((unitin == "F") || (unitin == "f")){
        tempout = (tempin - 32) / 1.8;
        unitout = "C";
        std::cout << tempout << unitout << std::endl;
    }

    else{
        std:: cout << "Invalid unit" << std::endl;
    }










}

// not = !, or = ||, and = &&
