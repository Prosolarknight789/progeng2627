#include <iostream>

int main(){
    int n, c = 1;
    std::cout << "enter a number " << std::endl;
    std::cin >> n;

    while (c != 0){
        std::cout << "Your sum is equal to " << n << std::endl;
        std::cout << "enter a number " << std::endl;
        std::cin >> c;
        n = n + c;


    }
}