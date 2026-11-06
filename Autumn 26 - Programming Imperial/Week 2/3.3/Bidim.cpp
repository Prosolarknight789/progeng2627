#include <iostream>

int main(){
    int n, m, a = 1;
    std::cin >> n;
    m = n;
    for (int c2 = 1; c2 <= m; c2++){
        for(int c = a; c <= (n * a); c = c + a){
        std::cout << (c);

    }

    std::cout << std::endl;
    a = a + 1;
    }
    
}

