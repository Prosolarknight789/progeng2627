#include <iostream>
int main(){
    int n, m = 1;
    std::cout << "Please enter your number" <<std::endl;
    std::cin >> n;
    std::cout << "Your maximum number is " << n << std::endl;

    while ((n != 0) && (m != 0)) {
        std::cout << "Please enter your number" <<std::endl;
        std::cin >> m;
        if (m > n){
            std::cout << "Your maximum number is " << m << std::endl;
            n = m;
        }
        else{
            std::cout << "Your maximum number is " << n << std::endl;
        }


    }

}