#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ile liczb wczytac?";
    cin >> n;
    int tab[100];
    for (int i = 0; i < 100; i++)
        tab[i] = 0;
    for (int i = 0; i < n; i++)
    {
        cout << i << ":";
        cin >> tab[i];
    }
    for (int i = (n - 1); i >= 0; i--)
    {
        cout << tab[i] << " ";
    }
    // suma elementow
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + tab[i];
    }
    cout << endl
         << "suma=" << s;
    return 0;
}