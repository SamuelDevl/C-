#include <iostream>
using std::string;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;

};

// constructor

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;
public: // private / protected

    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setCompany(string company){
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age){
        if(age>=18)
        Age = age;
    }
    int getAge(){
        return Age;
    }



    void IntroduceYourself() {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
        
    }

    Employee(string name, string company, int age){ //constructor pouziti 
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion(){
        if(Age<30)
            std::cout<<Name<<" got promoted"<<std::endl;
        else
            std::cout<<Name<<"sorry but no"<<std::endl;
    }
};
int main() {

    Employee Employee1 = Employee("Pavel","Yt",26);
    //Employee1.IntroduceYourself();
    
    Employee Employee2 = Employee("Tupac", "peter",28);
    //Employee2.IntroduceYourself();

    //Employee1.setAge(14);
   // std::cout<<Employee1.getName()<<" is "<<Employee1.getAge()<<" years old "<< std::endl;
    Employee1.AskForPromotion();
    Employee2.AskForPromotion();

}
