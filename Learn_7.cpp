#include <iostream>

int main(){

    int month;
    std::cout << "Enter the month (1-12): ";
    std::cin >> month;

    char grade;

    std::cout << "what letter grade?: ";
    std::cin >> grade;

    switch(grade){
        case 'A':
            std::cout << "you did great";
            break;
        case 'B':
            std::cout << "you did good";
            break;
        case 'C':
            std::cout << "you did okay";
            break;
        case 'D':
            std::cout << "you did not do good";
            break;
        case 'F':
            std::cout << "you failed";
            break;
        default:
            std::cout << "please only eneter (A-F)";
    
    }

    switch(month){
        case 1:
            std::cout << "it is january";
            break;
        case 2:
            std::cout << "it is february";
            break;
        case 3:
            std::cout << "it is march";
            break;
        case 4:
            std::cout << "it is april";
            break;
        case 5:
            std::cout << "it is May";
            break;
        case 6:
            std::cout << "it is june";
            break;
        case 7:
            std::cout << "it is july";
            break;
        case 8:
            std::cout << "it is august";
            break;
        case 9:
            std::cout << "it is september";
            break;
        case 10:
            std::cout << "it is ocotber";
            break;
        case 11:
            std::cout << "it is november";
            break;
        case 12:
            std::cout << "it is december";
            break;
        default:
            std::cout << "Please enter in only numbers (1-12)";
    }

    return 0;
}
