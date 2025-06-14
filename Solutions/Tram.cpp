#include <iostream>

int main(){
    int incoming, outgoing;
    int input;
    std::cin>>input;
    int max = 0;
    int temp;

    for(int i = 1; i <= input; i++){

        std::cin>>incoming>>outgoing;
        
        if(i == 1){
            temp = outgoing - incoming;
        }
        else{
            temp = temp - incoming + outgoing;
        }
        
        if(max < temp){
            max = temp;
        }

    }
    std::cout<<max;
}