#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj tekst: ";
    getline(cin,s);
    int poz = s.find('a');
    cout << poz;
    return 0;
}