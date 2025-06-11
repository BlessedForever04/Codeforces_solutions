#include <iostream>

int main(){
    std::string input;
    std::cin>>input;
    int count = 0;
    for(int i = 0; i < input.size(); i++){
        if(input[i] == '4' || input[i] == '7'){
            count++;
        }
    }
    if(count == 4 || count == 7){
        std::cout<<"YES"<<std::endl;
    }
    else{
        std::cout<<"NO"<<std::endl;
    }
}