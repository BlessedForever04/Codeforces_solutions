#include <iostream>

int main(){
    int n, answer = 0;
    std::cin>>n;
    std::string input;
    for(int i = 0; i < n; i++){
        std::cin>>input;
        if(input == "X++" || input == "++X"){
            answer++;
        }
        else{
            answer--;
        }
    }
    std::cout<<answer<<std::endl;
}