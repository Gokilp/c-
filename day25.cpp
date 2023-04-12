 //Returning References/Dangling References
#include<iostream>
int& somefn();
using namespace std;

int main()
{
  int x;
  x=somefn();
  cout<<x;
}

int& somefn()
{
   static int a=10;
    return a;

}
