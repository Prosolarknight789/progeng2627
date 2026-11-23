#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin){
    int m = 0;
    if(vin.size() == 0){
        m = -1;
    }
    for(int i = 0; i < vin.size(); i++){
        if((vin[i] < vin[m])) {
            m = i;
        }
        
    }
    return m;
}
int main(){
    std::vector<double>v{};
    std::cout << min_vector_element(v) <<std::endl;
}