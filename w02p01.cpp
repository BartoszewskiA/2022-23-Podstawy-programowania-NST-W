#include <iostream>

using namespace std;

void wypisz_tekst();
int oblicz();
double srednia(int a, int b, int c);

int main()
{
    // wypisz_tekst();
    // cout << oblicz() << endl;
    cout << srednia(10, 4, 6);
    return 0;
}

void wypisz_tekst()
{
    cout << "To Ja funkcja" << endl;
}

int oblicz()
{
    cout << "To Ja funkcja ktora udaje, ze liczy" << endl;
    return 32;
}

double srednia(int a, int b, int c)
{
    double wynik = (a + b + c) / 3.0;
    return wynik;
}