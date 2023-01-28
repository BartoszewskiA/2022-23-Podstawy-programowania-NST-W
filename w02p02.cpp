#include <iostream>
#include <math.h>

using namespace std;
double round2(double x = 3.1415);
void round3(double &x);

int main()
{
    double x;
    cout << "podaj liczbe: ";
    cin >> x;
    // round3(x);
    // cout << "po zaokragleniu: " << x;
    cout<<round2();

    return 0;
}

double round2(double x)
{
    double wynik = round(x * 100) / 100;
    return wynik;
}

void round3(double &x)
{
    x = round(x * 10) / 10;
}