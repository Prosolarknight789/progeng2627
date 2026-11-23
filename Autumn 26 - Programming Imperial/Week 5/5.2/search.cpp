#include <iostream>
#include <vector>

int search_vector(int n, const std::vector<int>& vin){
    int m;
    for(int i = 0; i < vin.size(); i++){
        if(vin[i] == n){
            m = i;
            return m;
        }
        else{
            m = -1;
        }
    }
    return m;
}

int main(){
    std::vector<int>v{3,4,5,7,6,7,9};
    std::cout << search_vector(7,v) <<std::endl;
}