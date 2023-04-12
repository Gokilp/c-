#include<iostream>
#include<vector>
using namespace std;
int main()
{
 vector<int> v={1,2,3,4,5};
 auto b=v.begin();
 while(b!=v.end())
 {
     cout<<*b<<" ";
     b++;
 }
}
