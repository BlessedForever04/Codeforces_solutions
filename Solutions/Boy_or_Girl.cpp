#include <iostream>
#include <vector>

bool check(char letter, std::vector <char> array){
    for(int i = 0; i < array.size(); i++){
        if(letter == array[i]){
            return false;
        }
    }
    return true;
}

int main(){
    std::vector <char> array;
    std::string name;
    std::cin>>name;

    for(int i = 0; i < size(name); i++){
        if(check(name[i], array)){
            array.push_back(name[i]);
        }
    }

    if(array.size() % 2 == 0){
        std::cout<<"CHAT WITH HER!";
    }
    else{
        std::cout<<"IGNORE HIM!";
    }
}