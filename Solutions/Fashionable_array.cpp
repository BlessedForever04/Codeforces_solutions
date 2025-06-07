#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    int n, input, temp, count, temp1, temp2;
    std::vector <int> array;
    std::cin>>n;

    while(n--){
        count = 0;
        temp1 = 0;
        temp2 = 0;
        std::cin>>input;

        while(input--){
            std::cin>>temp;
            array.push_back(temp);
        }

        sort(array.begin(), array.end());
        
        while(true){   
            if((array[temp1] + array[array.size() - 1]) % 2 != 0){
                temp1++;
            }
            else{
                break;
            }
        }
        while(true){   
            if((array[0] + array[array.size() - (temp2+1)]) % 2 != 0){
                temp2++;
            }
            else{
                break;
            }
        }
        if(temp1 < temp2){
            count = temp1;
        }
        else{
            count = temp2;
        }
        std::cout<<count<<std::endl;
        array.clear();
    }
}