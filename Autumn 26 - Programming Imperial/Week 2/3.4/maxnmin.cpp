#include <iostream>
int main(){
    int n, m = 1, c, a;
    std::cout << "Please enter your number" <<std::endl;
    std::cin >> n;
    c = n;
    std::cout << "Your maximum number is " << n << std::endl;

    while ((n != 0) && (m != 0)) {
        std::cout << "Please enter your number" <<std::endl;
        std::cin >> m;
        a = m;
        if (m > n){
            std::cout << "Your maximum number is " << m << std::endl;
            n = m;
        }
        if (a < c){
            std::cout << "Your minimum number is " << m << std::endl;
            c = a;
        }
        else{

        }


    }

}