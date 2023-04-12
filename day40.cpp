#include<iostream>
using namespace std;
class Animals
{
   public:
       void eat()
       {
           cout<<"Eating";
       }
};
class Dog:public Animals
{
public:
    void bark()
    {
        cout<< "Barking";

    }
};

int main()
{
   Dog a;
    a.eat();
   a.bark();
}
