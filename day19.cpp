#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="hello";
    for(auto c:s) //Range for Loop
        {

        cout<< c <<" ";
    }

    s[0]=toupper(s[0]); //using s[0] upperCase
    cout<<s<<"\n";
    cout<<s.empty(); // check string empty or not
}
