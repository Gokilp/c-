
#include<iostream>
#include<iomanip>
using namespace std;

void add(int a, int b)
{
    cout << "sum = " << (a + b)<<endl;
}

void add(double a, double b)
{
    cout << fixed << setprecision(2) << "sum = " << (a + b)<endl;
}
void add(float a, float b)
{
   cout << fixed << setprecision(2) << "sum = " << (a + b)<<endl;
}
int main()
{
    add(10, 20);
    add(10.000, 20.000);
    add(10.0,20.0);
    return 0;
}
