#include <iostream>

using namespace std;
int ile_razy();

int main()
{
    cout << ile_razy() << endl;
    cout << ile_razy() << endl;
    cout << ile_razy() << endl;
    return 0;
}

int ile_razy()
{
    static int ile = 0;
    ile++;
    return ile;
}