#include <iostream>

int main(){
    int n, answer = 0;
    std::cin>>n;
    int s1, s2, s3;
    for(int i = 0; i < n; i++){
        std::cin>>s1>>s2>>s3;
        if(s1+s2+s3 >= 2){
            answer++;
        }
    }
    std::cout<<answer;
}