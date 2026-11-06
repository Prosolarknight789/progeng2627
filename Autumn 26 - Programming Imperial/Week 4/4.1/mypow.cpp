#include <iostream>
#include <cmath>


double mypow(double base, int exp){
    double result = 1; 
    int n = exp;
    if(exp < 0){
        n = -exp;
    }
    for(int i = 1; i <= n; i++){
        result = result * base;
    }
    if(exp < 0){
        return 1.0/result;
    }

    // we declare a variable for the result
    // (should it be initialised? to what value?)

    // TODO: use a for loop to implement the repeated multiplication algorithm 
    // so that at the end of the loop variable result contains base^exp

    return result;
    // at the end we return the value we computed
    // we *do not print* anything in the function
}

int main(){
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^-1: " << mypow(2, -1) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
}