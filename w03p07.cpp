#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    plik.open("wynik.txt", ios::out);
    for (int i = 0; i < 100; i++)
        plik << i+1<<": naucze sie c++"<<endl;
    plik.close();
    return 0;
}