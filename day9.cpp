#include<iostream>
using namespace std;

class room
{
private:
    int length;
    int breadth;
public:
    void setvalue(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int getlength()
    {
        return length;

    }
    int getbreadth()
    {
        return breadth;
    }
     int calculateArea () {
      return length * breadth;
    }

};
int main()
{
    room r1;
    int l, b;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter breadth: ";
    cin >> b;
    r1.setvalue(l, b);
    cout << "Area is " << r1.calculateArea() << endl;
    cout << "Length is " << r1.getlength() << endl;
    return 0;
}
