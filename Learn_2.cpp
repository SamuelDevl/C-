#include <iostream>

namespace first{
    int x = 1;
}

namespace second {
    int x = 2;
}


int main() {

    //constantcs
     const double PI = 3.14159;
     const int LIGHT_SPEED = 299792458;
     const int WIDTH = 1920;
     const int HEIGHT = 1080;

    //name spaces
    using namespace first; 
    using namespace std;
    using std::cout;
    using std::string;

    //int x = 0;
    std::cout << x << '\n';
    
    //std::cout << first::x << '\n';
    //std::cout << second::x << '\n';
    string name = "bro";
    cout << "hello " << name;

    return 0; 
}
