#include <iostream>
#include <vector>

int main(){
    int n;
    int input;
    std::cin>>n;
    std::vector <int> array;
    int k;

    while(n--){
        std::cin>>input;

        while(input--){
            std::cin>>k;
            array.push_back(k);
        }

        if(array[array.size() - 1] <= array.size()){
            std::cout<<"NO"<<std::endl;
            array.clear();
        }
        else{
            while(array[0] > 0){
                for(int i = 0; i < array.size() - 1; i++){
                    array[i] = array[i] - i;
                }
                if(array[0] % array[array.size() - 1]){
                    std::cout<<"YES"<<std::endl;
                    array.clear();
                    break;
                }
            }
        }
    }
}

//failed for 2nd case, have to work on this one more