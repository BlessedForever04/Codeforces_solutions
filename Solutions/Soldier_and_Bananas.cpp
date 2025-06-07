#include <iostream>

int main(){
    int n;
    int k, m, w;
    int total = 0;
        std::cin>>k>>m>>w;
        for(int i = 1; i <= w; i++){
            total = total + k*i;
        }
        if(total < m){
            std::cout<<0<<std::endl;
        }
        else{
            m = total - m;
            std::cout<<m<<std::endl;
        }
}