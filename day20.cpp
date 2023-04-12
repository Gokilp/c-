#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
   // vector Declaration
   vector<int> v1;
   vector<int> v2={1,2,3};
   vector<int> v3(v2);
   vector<int>v4=v2;
   vector<int>v5{4,5,6};
   vector<int> v6(6);
   vector<int> v7(5,3);
   for(auto v:v7)
   {
     cout<<v <<" ";
   }
}
