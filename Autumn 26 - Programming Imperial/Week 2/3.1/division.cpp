#include <iostream>

int main(){
    int n, m, q = 0;
    std::cout << "Enter your number " << std::endl;
    std::cin >> n;
    std::cout << "Enter the number you want to divide this by " << std::endl;
    std::cin >> m;

    while (n > m){
        n = n - m;
        q = q + 1;


    }

    std::cout << "The quotient is " << q << std::endl;
    std::cout << "The remainder is " << n << std::endl;

}