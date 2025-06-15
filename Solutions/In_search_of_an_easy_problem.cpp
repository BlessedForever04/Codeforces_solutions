#include <iostream>
#include <set>

int main(){
    std::set <int> history;
    int input;
    int temp;

    std::cin>>input;
    while(input--){
        std::cin>>temp;
        history.insert(temp);
    }
    if(history.size() == 2){
        std::cout<<"HARD"<<std::endl;
    }
    else{
        auto itr = history.begin();
        if(*itr == 0){
            std::cout<<"EASY"<<std::endl;
        }
        else{
            std::cout<<"HARD"<<std::endl;
        }
    }
}