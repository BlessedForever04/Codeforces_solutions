#include <iostream>

int main(){
    int one;
    int two;
    std::cin>>one>>two;
    int counter = 0;
    if(one > two){
        std::cout<<counter;
    }
    else{
        while(true){
            counter++;
            one = one*3;
            two = two*2;

            if(one > two){
                std::cout<<counter;
                break;
            }
        }
    }
}