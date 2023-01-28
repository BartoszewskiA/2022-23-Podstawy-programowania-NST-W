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
    osoba pracownicy[3];
    string temp;
    for (int i = 0; i < 3; i++)
    {
        cout << "Podaj imiona: ";
        getline(cin, pracownicy[i].imie);
        cout << "podaj nazwisko: ";
        getline(cin, pracownicy[i].nazwisko);
        cout << "Podaj wiek: ";
        getline(cin,temp);
        pracownicy[i].wiek = atoi(temp.c_str());
        
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "imie: " << pracownicy[i].imie
             << " nazwisko: " << pracownicy[i].nazwisko
             << " wiek: " << pracownicy[i].wiek
             << endl;
    }
    return 0;
}