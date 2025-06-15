#include <iostream>
#include <set>

int main(){

    int input;
    std::cin>>input;
    input = input + 1;
    int thousand, hundred, ten, one;
    
    while(true){
        one = input % 10;
        ten = (input % 100 - one) / 10;
        hundred = (input % 1000 - input % 100) / 100;
        thousand = (input - input % 1000) / 1000;

        std::set <int> history;

        history.insert(one);
        history.insert(ten);
        history.insert(hundred);
        history.insert(thousand);

        auto onevalue = history.find(one);
        auto tenvalue = history.find(ten);
        auto hundredvalue = history.find(hundred);
        auto thousandvalue = history.find(thousand);

        if(onevalue == tenvalue || onevalue == hundredvalue || onevalue == thousandvalue || tenvalue == hundredvalue || tenvalue == thousandvalue || hundredvalue == thousandvalue){
            input++;
            history.clear();
        }
        else{
            std::cout<<thousand<<hundred<<ten<<one<<std::endl;
            break;
        }
    }
}