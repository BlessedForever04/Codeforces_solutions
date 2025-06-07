#include <iostream>
#include <string>

int main(){
    int number;
    std::cin>>number;
    std::string input, middle;

    for(int i = 0; i < number; i++){
        std::cin>>input;
        
        if(input.length() <= 10){
            std::cout<<input<<std::endl;
        }
        else{
            middle = std::to_string(input.length() - 2);
            std::cout<<input.substr(0 , 1) + middle + input.substr(input.length() - 1)<<std::endl;
        }
    }
}