#include <iostream>

int main(){
    std::string first;
    std::string second;

    int counter = 0;

    std::cin>>first>>second;

    for(int i = 0; i < size(first); i++){
        if(toupper(first[i]) != toupper(second[i])){
            if(toupper(first[i]) < toupper(second[i])){
                std::cout<<-1;break;
            }
            else{
                std::cout<<1;break;
            }
        }
        else{
            counter++;
        }
    }
    if(counter == size(first)){
        std::cout<<0;
    }
}