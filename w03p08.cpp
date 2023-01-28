#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    int a, b, c;
    string temp;
    plik.open("dane.txt", ios::in);
    getline(plik, temp);
    a = atoi(temp.c_str());
    getline(plik, temp);
    b = atoi(temp.c_str());
    getline(plik, temp);
    c = atoi(temp.c_str());

    cout << a + b + c;
    plik.close();
    return 0;
}