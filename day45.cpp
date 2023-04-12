#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;

    cin>>a>>b;
    try{
        if(b==0)
            throw 5;
        cout<<a/b;
    }
        catch( int i)
        {
            cout<<"Macth error"<<i<<endl;
        }

    }

