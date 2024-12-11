#include <iostream>

int main() {

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age >= 100){
        std::cout << "you are too old";
    }
    else if(age >= 10){
        std::cout << "welcome to the site!";
    } 
    else if ( age < 0){
        std::cout << "you havent benn born yet";
    }     
    else{
        std::cout << "your are not old enough";
    }

    return 0;

}
