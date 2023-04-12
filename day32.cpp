// This pointer

#include<iostream>
using namespace std;
 class Message
 {
    string name;
    string city;
    string pincode;
public:
    void setvalue(string name)
    {
       this-> name=name;
    }
    string getvalue()
    {
        return name;
    }
 };
 int main()
 {
  Message m1;
  m1.setvalue("gokil");
  cout<<m1.getvalue();
 }
