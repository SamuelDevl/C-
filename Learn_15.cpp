#include <iostream>
using std::string;

class Employee {
public: // private / protected
    string Name;
    string Company;
    int Age;

    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }

};
int main() {

    Employee Employee1;
    Employee1.Name = "Sam";
    Employee1.Company = "Global Elite";
    Employee1.Age = 21;
    Employee1.IntroduceYourself();
    
    Employee Employee2;
    Employee2.Name = "John";
    Employee2.Company = "Amazon";
    Employee2.Age = 36;
    Employee2.IntroduceYourself();


}
