#include<iostream>
using namespace std;
int maximum(int a,int b,int c);
int main()
{
  cout<<maximum(1,2,5);
 // cout<<maximum();

}
int maximum(int a,int b,int c)
{
    int max;
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
        return max;
}
