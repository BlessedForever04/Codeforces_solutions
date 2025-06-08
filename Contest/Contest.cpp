#include <iostream>
#include <vector>

int main(){
    int t;
    int n, x, input;
    std::cin>>t;
    std::vector <int> array;
    bool reached;
    bool answered;
    while(t--){
        answered = false;
        reached = false;
        std::cin>>n;
        std::cin>>x;

        for(int i = 0; i < n; i++){
            std::cin>>input;
            array.push_back(input);
        }

        for(int i = 0; i < n; i++){
            if(x <= 0){
                if(array[i] == 1){
                    if(!answered){
                        std::cout<<"NO"<<std::endl;
                        array.clear();
                        answered = true;
                    }
                }
            }
            else{
                if(reached == false){
                    if(array[i] == 1){
                        reached = true;
                        x--;
                    }
                }
                else{
                    x--;
                }
            }
        }
        // std::cout<<x<<std::endl;
        if(!answered){   
            std::cout<<"YES"<<std::endl;
            array.clear();
        }
    }
}