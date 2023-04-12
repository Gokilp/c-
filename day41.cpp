#include<iostream>
using namespace std;
class Add
{
private:
    int a;
    int b;
public:
   void setvalue(int a, int b) {
    this->a = a;
    this->b = b;

    }
    void display()
    {
        cout<<a<<endl<<b;
    }

};
int main()
{
    Add a;
    a.setvalue(10,20);
    a.display();
}

