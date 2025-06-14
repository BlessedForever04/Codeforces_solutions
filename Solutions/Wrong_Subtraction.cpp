#include <iostream>

int main(){
    int input;
    int times;
    std::cin>>input;
    std::cin>>times;
    for(int i = 0; i < times; i++){
        if(input % 10 == 0){
            input = input / 10;
        }
        else{
            input = input - 1;
        }
    }
    std::cout<<input;
}