#include <iostream>

//type conversion

int main(){

    //double x = (int)3.14;
    //char x =100;
    //std::cout << (char)100;

    int correct = 8;
    int questions = 10;

    double score = correct / (double)questions * 100;

    std::cout << score << '%' << '\n';

    //cin /cout

    std::string name;
    int age;

    std::cout << "whats your age?";
    std::cin >> age;

    std::cout << "whats your name" << '\n';
    //std::cin >> name;
    std::getline(std::cin >> std::ws, name); // pro retezec s mezeramy, pozor na poradi cin getline

    std::cout << "hello " << name << '\n';
    std::cout <<"your age is " << age << '\n';





    return 0;
}
