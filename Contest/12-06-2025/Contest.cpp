#include <iostream>
#include <vector>

int main(){
    int t;
    std::cin>>t;
    int input;
    int k;
    std::vector <int> array;

    for(int i = 0; i < t; i++){
        std::cin>>input>>k;
        for(int j = 0; j < input; j++){
            if(k > 0){
                array.push_back(1);
                k--;

            }
            else{

                array.push_back(0);
            }

        }
        for(int l = 0; l < input; l++){
            std::cout<<array[l];
        }
        std::cout<<std::endl;
        array.clear();
    }
    return 0;
}