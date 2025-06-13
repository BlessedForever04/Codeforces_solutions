#include <iostream>
#include <vector>

int main(){
    int n;
    int input;
    std::cin>>n;
    std::vector <int> array;
    while(n--){
        std::cin>>input;
        for(int i = 0; i < input; i++){
            array.push_back(0);
        }
        array[array.size()-1] = 1;
        for(int i = 0; i < input - 1; i++){
            array[i] =  i+2;
        }
        for(int i = 0; i < input; i++){
            std::cout<<array[i]<<" ";
        }
        std::cout<<std::endl;
        array.clear();
    }
}