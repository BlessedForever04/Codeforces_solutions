#include <iostream>

int main(){
    int t;
    std::cin>>t;

    std::string text1;
    std::string text2;

    int one_even;
    int one_odd;
    int zero_even;
    int zero_odd;
    int input;

    for(int i = 1; i <= t; i++){
        std::cin>>input;
        std::cin>>text1;
        std::cin>>text2;
        
        one_even = 0;
        one_odd = 0;
        zero_even = 0;
        zero_odd = 0;

        for(int j = 0; j < input; j++){
            if(j % 2 == 0){
                if(text1[j] == '1'){
                    one_even++;
                }
                if(text2[j] == '0'){
                    zero_even++;
                }
            }
            else{
                if(text1[j] == '1'){
                    one_odd++;
                }
                if(text2[j] == '0'){
                    zero_odd++;
                }
            }
        }
        
        if(zero_even >= one_odd && zero_odd >= one_even){
            std::cout<<"YES"<<std::endl;
        }
        else{
            std::cout<<"NO"<<std::endl;
        }
    }
}