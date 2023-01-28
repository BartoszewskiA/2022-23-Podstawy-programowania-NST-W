#include <iostream>

using namespace std;
double srednia(int a, int b);
double srednia(double a, double b);
double srednia(int a, int b, int c);
double srednia(int a, int b, int c, int d);

int main()
{
    cout << srednia(10.4, 15.8);
    return 0;
}

double srednia(int a, int b)
{
    return (a + b) / 2.0;
}

double srednia(double a, double b)
{
    return (a + b) / 2;
}
double srednia(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
double srednia(int a, int b, int c, int d)
{
    return (a + b + c + d) / 4.0;
}