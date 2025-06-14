#include <iostream>
#include <vector>

int main(){
    int n;
    int h;
    std::vector <int> array;
    std::cin>>n>>h;
    int temp;
    int count = 0;

    while(n--){
        std::cin>>temp;
        array.push_back(temp);
    }

    for(int i = 0; i < array.size(); i++){
        if(array[i] > h){
            count = count + 2;
        }
        else{
            count++;
        }
    }

    std::cout<<count;
}