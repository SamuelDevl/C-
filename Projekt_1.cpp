#include <iostream>
using std::string;

class Library: public Book {
private:
    int OpeningHour;
    int ClosingHour;
    int ActiveHours;
    int BooksCount;
    int RentedBooks;
    int AvailableBooks;
    int ActiveUsers;
public:

    void setOpeningHour(int openinghour){
        OpeningHour = openinghour;
    }
    int getOpeningHour(){
        return OpeningHour;
    }   
    void setClosingsHour(int closinghour){
        ClosingHour = closinghour;
    }
    int getClosingHour(){
        return ClosingHour;
    }   
    void setActiveHours(int activehours){
        ActiveHours = activehours;
    }
    int getActiveHours(){
        return ActiveHours;
    }   
    void setBooksCount(int bookscount){
        BooksCount = bookscount;
    }
    int getBooksCount(){
        return BooksCount;
    }
    void setRentedBooks(int rentedbooks){
        RentedBooks = rentedbooks;
    }
    int getRentedBooks(){
        return RentedBooks;
    }   
    void setAvailableBooks(int availablebooks){
        AvailableBooks = availablebooks;
    }
    int getAvailableBooks(){
        return AvailableBooks;
    }   
    void setActiveUsers(int activeusers){
        ActiveUsers = activeusers;
    }
    int getActiveUsers(){
        return ActiveUsers;
    }   

    Library(int openingHour,int closingHour, int activeHours, int booksCount, int rentedBooks,int availableBooks, int activeUsers, int Name, int Author, int Availablity)
        :Book(Name,Author,Availablity)
    {
        OpeningHour = openingHour;
        ClosingHour = closingHour;
        ActiveHours = activeHours;
        RentedBooks = rentedBooks;
        AvailableBooks = availableBooks;
        ActiveUsers = activeUsers;
    } 

    void RentingApproved(){

        
    }


};

class Book {   
private:
    string Name;
    string Author;
    bool Availablity;
    int RealeaseDate;
public:

    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    void setAuthor(string author){
        Author = author;
    }
    string getAuthor(){
        return Author;
    }
    void setAvailablity(int availablity){
        Availablity = availablity;
    }
    bool getAvaliablity(){
        return Availablity;
    }
    void setRealseDate(int realeasedate){
        RealeaseDate = realeasedate;
    }
    int getRealeaseDate(){
        return RealeaseDate;
    }

    Book(string name, string author, bool availablity, int realeaseDate)
    {
        Name = name;
        Author = author; 
        Availablity = availablity;
        RealeaseDate = realeaseDate;
    }

    void Print(){
    std::cout<<Name<< " was written by " << Author << " in " << RealeaseDate << std::endl;
    }


};


int main(){

    Book AnimalFarm = Book("Animal Farm", "Orwel", 1 ,1853);
    AnimalFarm.Print();
    
}
