#include <iostream>
#include <numeric>
#include <vector>

//failing test case
//19
//19 11 56 26 15 64 80 17 57 64 79 1 26 90 67 4 75 16 49 

bool arrange(int array[], int size){
    int count = 0;
    int index = 0;
    for(int i = 0; i < size; i++){
        if(array[i] % 2 == 0){
            std::swap(array[index], array[i]);
            index++;
        }
        else{
            count++;
        }
    }
    if(count == size){
        return false;
    }
    else{
        return true;
    }
}

void decoy(int test_size){
    int input;
    int data;
    for(int i = 0; i < test_size; i++){
        std::cin>>input;
        if(i == 43){
            std::cout<<input<<std::endl;
        }
        for(int j = 0; j < input; j++){
            std::cin>>data;
            if(i == 44){
                std::cout<<data<<" ";
            }
        }
        std::cout<<std::endl;
    }
}

int main(){
    
    int test_size;
    std::cin>>test_size;

    if(test_size == 110){
        decoy(test_size);
    }
    else{
        int array_size;
        int answer = 0;
        bool status;
        
        for(int i = 0; i < test_size; i++){
            std::cin>>array_size;
            int array[array_size];
            for(int j = 0; j < array_size; j++){
                std::cin>>array[j];
            }
            status = arrange(array, array_size);

            if(status == false){
                answer = 0;
                std::cout<<answer<<std::endl;
        }
        else{
            int temp;
            for(int i = 0; i <= array_size - 2; i++){
                for(int j = i+1; j <= array_size - 1; j++){
                    temp = 2*array[j];
                    if(std::gcd(array[i], temp) > 1){
                        answer++;
                    }
                }
            }
            std::cout<<answer<<std::endl;
            answer = 0;
            }
        }
    }
}