#include <iostream>

int main(){

    int temp;
    bool sunny = false;


    std::cout << "enter the temperature";
    std::cin >> temp; 

    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad!\n";
    } 
    else {
        std::cout << "The temperature is good!\n";
    }
 
    if (!sunny){
        std::cout << "it is cloudy outside";
    }
    else {
        std::cout << "it is sunny outside";
    }

    return 0;
}
