#include <iostream>
#include <vector>

int main(){
    int n, m, t;
    std::cout << "Please enter your number n " <<std::endl;
    std:: cin >> n;
    std::vector<int> v;

    for(int i = 0; i < n; i++){
        std::cin >> m;
        v.push_back(m);

    }

    std::cout << "Please enter your number t" <<std::endl;
    std:: cin >> t;
    std::vector<int> p;

    for(int i = 0; i < v.size(); i++){
        if(v[i] < t){
            p.push_back(v[i]);

        }

    }
    for(int i = 0; i < p.size(); i++){
        std::cout << p[i] <<std::endl;
    }




}