#include <iostream>

int main(){

    std::string name;
    std::cout << "Enter you name: ";
    std::getline(std::cin, name); 

    if(name.length() > 12){
        std::cout << "Your name cant be over 12 characters";
    }
    else {
        std::cout << "welcome " << name;
    }

    if(name.empty()){
        std::cout << " you didnt enter your name";
    }
    else {
        std::cout << "Hello " << name;
    }

    name.clear();
    std::cout << "Hello " << name;

    name.append("@gmail.com");
    std::cout << "Your user name is now: " << name;

    std::cout << name.at(0);
    name.insert(0, "@");
    std::cout << name;

    std::cout << name.find(' ');

    name.erase(0,3);
    std::cout  << name;

    return 0;
}
