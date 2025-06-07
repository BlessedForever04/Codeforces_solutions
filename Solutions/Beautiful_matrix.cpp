#include <iostream>

int main(){
    int array[5][5];
    int x, y;
    bool check = true;
    for(int i = 0; check; i++){
        for(int j = 0; j < 5; j++){
            std::cin>>array[i][j];
            if(array[i][j] == 1){
                x = i + 1;
                y = j + 1;
                check = false;
                break;
            }
        }
    }
    int output;
    if(x >= 3){
        output = x - 3;
    }
    else{
        output = 3 - x;
    }
    if(y >= 3){
        output = output + y - 3;
    }
    else{
        output = output + 3 - y;
    }
    std::cout<<output<<std::endl;
}