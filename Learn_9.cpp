#include <iostream>

int main(){

    int grade = 75;

    grade >= 60 ? std::cout << "you pass!\n" : std::cout <<"you fail\n" ; //ternary operator, same as if else statemant, condition ? exp1 : exp 2;

    int number = 8;
    number % 2 == 1 ? std::cout << "ODD \n" : std::cout << "EVEN \n";

    bool hungry = true;

    //hungry ? std::cout << "you are hungry \n" : std::cout << "you are full \n";

    std::cout << (hungry ? "you are hungry" : "you are full");

    return 0;
}
