#include <iostream>
using namespace std;

// Třída (Class) - Auto
class Auto {
private:
    string znacka;   // Zapouzdření (Encapsulation) - privátní atribut
    int rokVyroby;
    
public:
    // Konstruktor
    Auto(string z, int r) {
        znacka = z;
        rokVyroby = r;
    }
    
    // Metoda (Funkce) pro výpis atributů
    void vypisInfo() {
        cout << "Značka: " << znacka << ", Rok výroby: " << rokVyroby << endl;
    }
};

// Dědičnost (Inheritance) - SportovniAuto dědí z Auto
class SportovniAuto : public Auto {
private:
    int maximalniRychlost;
    
public:
    // Konstruktor volá konstruktor nadřazené třídy
    SportovniAuto(string z, int r, int maxRychlost) : Auto(z, r) {
        maximalniRychlost = maxRychlost;
    }
    
    // Přepsání (Overriding) metody vypisInfo
    void vypisInfo() {
        Auto::vypisInfo();
        cout << "Maximální rychlost: " << maximalniRychlost << " km/h" << endl;
    }
};

int main() {
    // Vytvoření objektů (Instance)
    Auto mojeAuto("Škoda", 2015);
    SportovniAuto sportAuto("Ferrari", 2020, 350);
    
    // Volání metod
    mojeAuto.vypisInfo();
    sportAuto.vypisInfo();
    
    return 0;
}