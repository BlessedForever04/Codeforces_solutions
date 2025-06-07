#include <iostream>

int main(){

    int n, size, answer = 0, temp = 1;
    std::cin>>n;

    for(int i = 0; i < n; i++){
        std::cin>>size;
        int arr[size];
        for(int j = 0; j < size; j++){
            std::cin>>arr[j];
        }
        for(int j = 0; j < size; j++){
            arr[j] = arr[j] + 1;
            for(int k = 0; k < size; k++){
                temp = temp * arr[k];
            }
            arr[j] = arr[j] - 1;
            if(answer < temp){
                answer = temp;
            }
            temp = 1;
        }
        std::cout<<answer<<std::endl;
        answer = 0;
    }
}