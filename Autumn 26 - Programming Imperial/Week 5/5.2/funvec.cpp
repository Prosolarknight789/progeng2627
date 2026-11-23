#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(const std::vector<double>& vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    int n, m ;
    std::vector<double> v;
    std::cout << "How many elements do you want to store " << std::endl;
    std:: cin >> n;

    for(int i = 0; i < n; i++){
        std::cin >> m;
        v.push_back(m);

    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}