#include<iostream>
#include<conio.h>
using namespace std;
int i=1;
class wc
{
public:
long ca,cl,wcp;
void getdata()
{
cout<<"\n enter the current assets:"<<::i<<"years";
cin>>ca;
cout<<"\n enter liabilities:"<<::i<<"years";
cin>>cl;
wcp=ca-cl;
}
wc operator-(wc wcp)
{
wc w;
w.wcp=w.wcp-w.wcp;
return wcp;
}
void show()
{
if(wcp>0)
cout<<"\n net increasing in wc";
else if(wcp<0)
cout<<"\n decreased";
else
cout<<"\n no change";
}
};
int main()
{

cout<<"WORKING CAPITAL";
wc x,y,z;
x.getdata();
::i=::i=2;
y.getdata();
z=y-x;
cout<<x.wcp<<endl;
cout<<y.wcp;
z.show();
getch();
}

