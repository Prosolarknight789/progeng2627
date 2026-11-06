#include <iostream>
#include <cmath>

int main(){
    double x,n;
    std::cout << "Enter your base " << std::endl;
    std::cin >> x;
    std::cout << "Enter your exponent " << std::endl;
    std::cin >> n;
    std::cout << std::pow(x,n) << std::endl;
}