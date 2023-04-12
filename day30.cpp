#include<iostream>
using namespace std;
class Count{
     friend void setx(Count &c,int x1);
private:
    int  x;
public:
    Count()
    :x(0)
    {


    }

 int get(){
 return x;
 }

};
void setx(Count &c,int x1)
 {
     c.x=x1;

 }
int main()
{
 Count c1;
  setx(c1,9);
 cout<<c1.get();
}
