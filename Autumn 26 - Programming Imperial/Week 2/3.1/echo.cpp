#include <iostream>

int main(){
    std::string word;

    std::cin >> word;

    while (word != "stop"){
        std::cout << word << std::endl;
         std::cin >> word;
    }
    

}
