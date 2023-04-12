#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<string>grocerylist;
    string item;
    cout<<"Enter the List";
    while(cin>>item)
    {
        grocerylist.push_back(item);

    }
    cout<<"your list contains following items"<<endl;
    for(auto i: grocerylist)
    {
        cout<<i<<" ";
    }
}
