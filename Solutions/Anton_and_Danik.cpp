#include <iostream>

int main(){
    int n;
    std::cin>>n;
    int array[n];
    char input;
    int a = 0, k = 0;

    for(int i = 0; i < n; i++){
        std::cin>>input;
        array[i] = input;    
    }

    for(int i = 0; i < n; i++){
        if(array[i] == 'A'){
            a++;
        }
        else{
            k++;
        }
    }

    if(k < a){
        std::cout<<"Anton"<<std::endl;
    }
    else if(k > a){
        std::cout<<"Danik"<<std::endl;
    }
    else{
        std::cout<<"Friendship"<<std::endl;
    }
}