#include <iostream>
#include <vector>

//typedef #include <vector> must have 
//typedef a using funguji stejne, lepe se pouziva using 
//typedef std::vector<std::pair<std::string, int >> pairlist_t

//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){

    text_t firstname = "Bro";
    number_t age = 2;
    std::cout << firstname << '\n';
    std::cout << age << '\n';

    int students = 6 - 5 + 4 * 3 / 2;
    //int reminder = students % 3;
    //students += 2;
    //students -=1;
    //students--;
    //students++;
    //students *=2;
    //students /=3;


    std::cout << students;

    return 0;
}
