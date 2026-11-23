#include <iostream>
#include <vector>

int main(){
    int n, m, s, counter = 0;
    std::cout << "Please enter your number n " <<std::endl;
    std:: cin >> n;
    std::vector<int> v;

    for(int i = 0; i < n; i++){
        std::cout << "Please enter a number " <<std::endl;
        std:: cin >> m;
        v.push_back(m);

    }
    std::cout << "Please enter a number s " <<std::endl;
    std:: cin >> s;


    for(int i = 0; i < v.size(); i++){
        if(v[i] == s){
            counter = counter + 1;
        }


    }
    std::cout << "There are " << counter << " occurences of " << v.size() <<std::endl;
    
}