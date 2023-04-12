
/********************* Defalut argument ********************/


#include<iostream>

using namespace std;
int product(int a,int b=1,int c=1); //defalut agrument made changes in prototype
int main()
{
  cout<<product(100);

}
int product(int a,int b,int c)
{
    return a*b*c;
}
