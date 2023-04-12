#include<iostream>
int square(int a);
using namespace std;
int main()
{
    int a;
    a=square(10);
    cout<<a;
}

 inline int square(int a) //inline value
{
    return a*a;
}
