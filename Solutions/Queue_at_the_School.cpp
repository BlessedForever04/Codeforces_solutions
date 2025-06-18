#include <iostream>

int main(){
    int n;
    int t;
    std::string queue;
    std::cin>>n>>t;
    std::cin>>queue;

    for(int i = 0; i < n; i++){
        if(queue[i] == 'B'){
            if(i+t > n){
                queue[n-1] == 'B';
                queue[i] == 'G';
            }
            else{
                queue[i+t] == 'B';
                queue[i] == 'G';
            }
        }
    }
    std::cout<<queue;
}