#include <iostream>

int main(){


    for(int i = 1; i <= 20; i++){
        if( i == 13){
            continue; // break
        }
        std::cout << i << '\n';
    }


    int rows;
    int columns;
    char symbol;

    std::cout << "how many rows: ";
    std::cin >> rows;

    std::cout << "how many columns: ";
    std::cin >> columns;

    std::cout << "enter a symbol: ";
    std::cin >> symbol;

    for(int i = 1; i <= 3; i++){
        for(int j = 1; j<=columns;j++){
            std::cout << symbol;
        }
        std::cout << '\n';
    }



    return 0;
}
