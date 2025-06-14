#include <iostream>

int main(){
    int input, output, steps = 0, div;
    std::cin>>input;
    int array[] = {1, 2, 3, 4, 5};

    while(input != 0){
        for(int i = 4; i >= 0; i--){
            if(array[i] <= input){
                while(input >= array[i]){
                    div = input / array[i];
                    steps = div + steps;
                    input = input - array[i]*div;
                }
            }
        }
    }
    std::cout<<steps<<std::endl;
}