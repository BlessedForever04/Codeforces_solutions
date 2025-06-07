#include <iostream>
// 10  20
int main(){
    int n, a, b, answer, k;
    std::cin>>n;

    for(int i = 0; i < n; i++){
        answer = 1;
        std::cin>>a>>b;
        k = 1;
        while(true){
            if(a + k <= b){
                a = a + k;
                k++;
                answer++;
            }
            else{
                break;
            }
        }
        std::cout<<answer<<std::endl;
    }
}