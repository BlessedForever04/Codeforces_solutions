#include <iostream>

int main(){
    std::string input;
    std::string answer;
    std::cin>>input;
    std::cin>>answer;

    if(input.length() != answer.length()){
        std::cout<<"NO";
        return 0;
    }

    for(int i = 0; i < input.length(); i++){
        if(input[i] != answer[answer.length() - i - 1]){
            std::cout<<"NO";
            return 0;
        }
    }
    std::cout<<"YES";
    return 0;
}