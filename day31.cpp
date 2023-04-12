#include<iostream>
using namespace std;
class Count
{
   friend  void setx(int x1)
  private:
    int  x;
public:
    Count()
    :x(0)
    {

    }
  void setx(int x1)
       {
           x=x1;
       }
 int getx()
       {
           return x;
       }
};
  void setx(int x1)
       {
           x=x1;
       }
int main()
{
    Count c1;
    c1.setx(10);
    cout<<c1.getx();

    return 0;
}
