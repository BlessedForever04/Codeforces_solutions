#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string first, second, third;
        cin>>first>>second>>third;
        cout<<first[0]<<second[0]<<third[0]<<endl;
    }
}