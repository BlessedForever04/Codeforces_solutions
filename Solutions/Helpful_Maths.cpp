#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector <int> array;
    std::string input;
    std::cin>>input;

    for(int i = 0; i <= size(input) - 1; i = i + 2){
        array.push_back((int)input[i]);
    }

    sort(array.begin(), array.end());
    
    int j = 0;
    
    for(int i = 0; i < array.size(); i++){
        input[j] = array[i];
        j = j + 2;
    }

    for(int i = 0; i < size(input); i++){
        std::cout<<input[i];
    }

}