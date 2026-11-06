#include <iostream>
int main(){
    double h,w, BMI;

    std::cout << "Please enter your height in metres" << std::endl;
    std::cin >> h;

    std::cout << "Please enter your weight in kilograms" << std::endl;
    std::cin >> w;

    BMI = w/(h*h);

    std::cout << BMI << std::endl;



    
}