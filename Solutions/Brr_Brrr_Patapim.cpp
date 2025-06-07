#include <iostream>

int main(){
    int t, n, target;
    std::cin>>t;
    
    while(t--){
        target = 0;
        std::cin>>n;
        int output[n*2];
        int array[n][n];
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                std::cin>>array[i][j];
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                output[i+j+1] = array[i][j];
            }
        }

        int length = sizeof(output)/sizeof(output[0]);
        for(int i = 1; i < length; i++){
            target = target + output[i];
        }
        int full = 0;
        for(int i = 1; i <= 2*n; i++){
            full = full + i;
        }
        target = full - target;
        output[0] = target;
        for(int i = 0; i < length; i++){
            std::cout<<output[i]<<" ";
        }
    }
}