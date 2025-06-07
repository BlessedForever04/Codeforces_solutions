#include <iostream>
#include <vector>

int main(){
    int n, k, data;
    std::cin>>n>>k;
    std::vector <int> array;

    while(n--){
        std::cin>>data;
        array.push_back(data);
    }
    for(int i = 0; i < array.size(); i++){
        if(array[k - 1] == 0){
            if(array[i] > array[k - 1]){
                n++;
            }
            else{
                break;
            }
        }
        else{
            if(array[i] >= array[k - 1]){
                n++;
            }
            else{
                break;
            }
        }
    }
    std::cout<<n+1;
}