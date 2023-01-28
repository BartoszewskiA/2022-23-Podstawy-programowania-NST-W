#include <iostream>
#include <string>

using namespace std;

int main()
{
    string osoba;
    cout << "Przedstaw sie ";
    // cin >> osoba;
    getline(cin, osoba);
    // cout << "Witaj " << osoba << "!";
    string powitanie = "";
    powitanie += "Witaj ";

    // powitanie.clear();

    powitanie += osoba;
    powitanie += "!";
    cout << powitanie;
    return 0;
}