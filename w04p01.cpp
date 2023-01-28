#include <iostream>
#include <string>

using namespace std;
struct osoba
{
    string imie;
    string nazwisko;
    int wiek;
};

int main()
{
    osoba k1;
    cout << "Podaj imiona: ";
    getline(cin, k1.imie);
    cout << "podaj nazwisko: ";
    getline(cin, k1.nazwisko);
    cout << "Podaj wiek: ";
    cin >> k1.wiek;

    cout << "imie: " << k1.imie 
    << " nazwisko: " << k1.nazwisko 
    << " wiek: " << k1.wiek 
    << endl;
    return 0;
}