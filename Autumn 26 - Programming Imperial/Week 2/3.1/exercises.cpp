#include <iostream>

int main(){
    double n, m,  a = 1, c = 1;
    std::cout << "enter a number " << std::endl;
    std::cin >> n;
    std::cout << "Your average is equal to " << n << std::endl;

    while (c != 0){
        std::cout << "enter a number " << std::endl;
        std::cin >> c;
        a = a + 1;
        n = (n + c);
        m = (n / a);
        std::cout << "Your average is equal to " << m << std::endl;




    }
}

// program doesent work yet