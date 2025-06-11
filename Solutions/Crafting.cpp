#include <iostream>
#include <vector>

int main(){
    
    int t, difference, index;
    std::cin>>t;
    int input;
    bool answered, is_found;
    std::vector <int> array;
    std::vector <int> min_array;
    int te;

    for(int n = 1; n <= t; n++){

        answered = false;
        is_found = false;
        std::cin>>input;
        
        for(int i = 0; i < input; i++){
            std::cin>>te;
            array.push_back(te);
        }
        
        for(int i = 0; i < input; i++){
            std::cin>>te;
            min_array.push_back(te);
        }
        
        if(array != min_array){
            for(int i = 0; i < input; i++){
                if(array[i] < min_array[i]){
                    difference = min_array[i] - array[i];
                    index = i;
                    is_found = true;
                    break;
                }
            }
            if(!is_found){
                std::cout<<"YES"<<std::endl;
                array.clear();
                min_array.clear();
                break;
            }
            for(int i = 0; i < input; i++){
                if(i != index){
                    if(array[i] - min_array[i] <= 0 || array[i] - min_array[i] < difference){
                        std::cout<<"NO"<<std::endl;
                        answered = true;
                        array.clear();
                        min_array.clear();
                        break;
                    }
                }
            }
        }
        if(!answered){
            std::cout<<"YES"<<std::endl;
            array.clear();
            min_array.clear();
        }
    }
}
