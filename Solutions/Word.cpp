#include <iostream>

int main(){
    std::string input;
    std::cin>>input;
    int upper_count = 0;
    int lower_count = 0;

    for(int i = 0; i < input.length(); i++){
        if(isupper(input[i])){
            upper_count++;
        }
        else{
            lower_count++;
        }
    }

    for(int i = 0; i < input.length(); i++){
        if(upper_count > lower_count){
            input[i] = toupper(input[i]);
        }
        else{
            input[i] = tolower(input[i]);
        }
    }
    std::cout<<input;
}