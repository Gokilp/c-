#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    fstream file;
file.open("myfile",ios::out);
file<<"I am Writing This to this file";
file.close();

    string get;
    file.open("myfile",ios::in);
    while(cin>>get)
    {
        cout<<get<<' ';
    }
}
