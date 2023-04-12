
// ENCLAPULASTION

#include<iostream>
using namespace std;
class Rectangle
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
};
int main()
{
  Rectangle rect;
  rect.setvalue(10,20);
  cout<<rect.getlength();
  cout<<rect.getbreadth();
}
