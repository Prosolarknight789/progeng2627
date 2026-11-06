#include <iostream>

int main(){

    double x, acc = 0;
    int n, counter = 0;

    std::cout << "Enter your number" << std::endl;
    std::cout << "Enter your exponent" << std::endl;

    std::cin >> x >> n;

    while(counter < n){
        acc = acc + x;
        counter = counter + 1;
    }

    std::cout << x << "^" << n <<  " = " << acc << std::endl;

}