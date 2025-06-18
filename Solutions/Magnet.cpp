#include <iostream>


int main(){
    int t;
    std::cin>>t;

    int current;
    int previous = 0;
    int counter = 1;

    if(t == 1){
        std::cout<<1<<std::endl;
        return 0;
    }
    if(t == 0){
        std::cout<<0;
        return 0;
    }

    while(t--){
        if(previous == 0){
            std::cin>>current;
            previous = current;
        }
        else{
            std::cin>>current;
            if(current != previous){
                counter++;
                previous = current;
            }
        }
    }
    std::cout<<counter<<std::endl;
    return 0;
}