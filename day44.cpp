// Expection Handling

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
   try{

   if(b==0){
    throw "error";
    }
    cout<<a/b;
   }
   catch( const char*ch)
   {
       cout<<"Error";
   }


}
