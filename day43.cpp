#include<iostream>
using namespace std;
class Shape{
public:
    int base;int height;
Shape(int a,int b)
{
    base=a;
    height=b;

int  area()
{
    cout<<"Base class area in";
    return 0;
}
};
class Traingle :public Shape
{
public :
 Traingle(int a,int b)
    int area()
    {
        cout<<"Traingle Area"<<endl;
        return base*height;
    }

};
class Rectangle:public Shape
{
public :
    Rectangle(int a,int b)
    int area()
    {
        cout<<"Rectangle Area"<<endl;
        return base*height;
    }

};
int main()
{
    Traingle t(10,20)
    cout<<t.area();
    Rectangle r(10,20);
}
