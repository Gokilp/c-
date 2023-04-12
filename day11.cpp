//class and objects

#include<iostream>
#include<string>
using namespace std;
class room
{

private:
    int roll;
    string name;
public:
    void setvalue(int r,string n)
    {
        roll=r;
        name=n;
    }
    int getroll()

    {
     return roll;
    }

    string getname()
    {
        return name;
    }
};

int main()
{
   room r1;
   int r;
   string n;
   cout<<"Enter rollno";
   cin>>r;
   cout<<"Enter name";
   cin>>n;
  r1.setvalue(r,n);
cout << "Student ID: " << r1.getroll()<< endl;
 cout << "Student Name : " << r1.getname() << endl;

}
