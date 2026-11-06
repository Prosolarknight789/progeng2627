#include <iostream> 

int main(){
    int n, m;
    std::cout << "Enter the number that you want factorialed " << std::endl;
    std::cin >> n;
    m = n;

    for(int i = 1; i < m; i++ ){
        n = n*(m-i);

    }

    std::cout << n << std::endl;

}

// this program does work now.