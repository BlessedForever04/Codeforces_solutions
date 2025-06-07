#include <iostream>

int main(){
    int steps = 0, distance;
    int gun = 5;
    std::cin>>distance;
    
    while(distance != 0){
        while(distance < gun && gun > 0){
            gun--;
        }
        std::cout<<distance / gun<<std::endl;
        steps = steps + distance / gun;
        // std::cout<<steps<<std::endl;
        distance = distance - steps * gun;
    }
    std::cout<<steps<<std::endl;    
}