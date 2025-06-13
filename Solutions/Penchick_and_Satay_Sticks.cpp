#include <iostream>
#include <vector>

std::string run(std::vector <int> array){
    for(int k = 1; k < array.size(); k++){
        if(array[k-1] != k && array[k-1] != k+1){
            if(array[k-1] != array[k-2]-1){
                return "NO";
            }
        }
    }
    return "YES";
}

int main(){
    int n;
    std::cin>>n;
    int loop, input;
    std::vector <int> array;
    
    for(int i = 1; i <= n; i++){
        std::cin>>loop;
        
        for(int j = 0; j < loop; j++){
            std::cin>>input;
            array.push_back(input);
        }
        
        if(i == 244){
            std::cout<<loop<<std::endl;
            std::cout<<"size:"<<array.size()<<std::endl;
            for(int no = 0; no < array.size(); no++){
                std::cout<<array[no]<<" ";
            }
        }
        std::string answer = run(array);
        array.clear();
        std::cout<<answer<<std::endl;
    }
}