#include<iostream>  //new and delete
using namespace std;
int main()
{

  int *ptr = new int (10);
  int *ptr1 =new int (20);

  delete ptr;

  cout<< *ptr1;
}
