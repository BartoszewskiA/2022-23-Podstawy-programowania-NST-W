#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Podaj tekst: ";
    getline(cin, s);
    int poz = s.find('a');
    if (poz != -1)
    {
        do
        {
            cout << poz << " ";
            poz++;
            poz = s.find('a',poz);
        } while (poz != -1 && poz < s.length()-1);
    }

    cout << poz;
    return 0;
}