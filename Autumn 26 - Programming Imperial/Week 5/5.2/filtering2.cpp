#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] < t){
            vout.push_back(vin[i]);
        }
    }
}

int main(){
    double m;
    std::vector<double>a{2,8,5,7,9,4};
    m = 9;
    std::vector<double>v;
    filter_v(a,m,v);
    for(int i = 0; i < v.size(); i++){
        std::cout << v[i] <<std::endl;
    }

}