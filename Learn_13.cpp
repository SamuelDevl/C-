#include <iostream>

int main(){

    std::string name;

    while(name.empty()){
        std::cout << "Enter you name: ";
        std::getline(std::cin, name);
    }

    std::cout << "hello " << name;

    int number;

    do{
        std::cout << "enter a positive number: ";
        std::cin >> number;
    }while(number < 5);

    std::cout << "The # is: " << number;

    

   for(int i = 0; i <= 10; i++){
        std::cout << i << '\n';
   }
    std::cout << "Happy new year\n";

    return 0;
}
