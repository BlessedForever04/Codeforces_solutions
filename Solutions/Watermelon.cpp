#include <iostream>

int main(){
    int input;
    std::cin>>input;
    if(input == 2){
        std::cout<<"NO";
    }
    else{
        if(input % 2 == 0){
            std::cout<<"YES";
        }
        else{
            std::cout<<"NO";
        }
    }
}