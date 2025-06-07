#include <iostream>

int main(){
    int n;
    std::cin>>n;
    std::string input;
    bool state;
    int count;

    while(n--){
        count = 0;
        state = false;
        std::cin>>input;
        for(int i = input.size()-1; i >= 0; i--){
            if(state == false){
                if((input[i] - '0') > 0){
                    state = true;
                }
                else{
                    count++;
                }
            }
            else{
                if((input[i] - '0') > 0){
                    count++;
                }
            }
        }
        std::cout<<count<<std::endl;
    }
}