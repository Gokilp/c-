#include<iostream>
#include<iomanip>
using namespace std;

void add(int a, int b)
{
    cout << "sum = " << (a + b);
}

void add(double a, double b)
{
    cout << fixed << setprecision(2) << "sum = " << (a + b);
}

int main()
{
    add(10, 20);
    add(10.00, 20.00);
    return 0;
}
