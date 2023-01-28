#include <iostream>
#include <time.h>

using namespace std;
struct kolor
{
    int r;
    int g;
    int b;
};

kolor losuj_kolor();

int main()
{
    srand(time(NULL));
    kolor k1 = losuj_kolor();
    cout << "R=" << k1.r
         << " G=" << k1.g
         << " B=" << k1.b << endl;
    return 0;
}

kolor losuj_kolor()
{
    kolor losowy;
    losowy.r = rand() % 256;
    losowy.g = rand() % 256;
    losowy.b = rand() % 256;
    return losowy;
}
