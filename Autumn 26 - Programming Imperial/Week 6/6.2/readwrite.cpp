#include <iostream>
#include <vector>
#include <fstream>
#include <cstdlib>

int main(){
    std::string input;
    std::string output;
    std::cout << "Enter name of input file" <<std::endl;
    std:: cin >> input;
    std::cout << "Enter name of output file" <<std::endl;
    std:: cin >> output;
    std::ifstream infile;
    infile.open(input);
    std::vector<int> v;
   
    if(!infile.is_open()){
    std::cout << "error opening file" << std::endl;
    return EXIT_FAILURE;
    }



    int tmp;

    while(infile >> tmp){
        v.push_back(tmp);


    }


    std::ofstream outfile;
    outfile.open(output);
    
    if(!outfile.is_open()){
    std::cout << "error opening file" << std::endl;
    return EXIT_FAILURE;
    }

   
    for(int i = (v.size() - 1); i >= 0; i--){
        outfile << v[i] << std::endl;

    }


}