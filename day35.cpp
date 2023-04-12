#include<iostream>
using namespace std;
class Time
{
 private:
     int hours;
     int minutes;
 public:
    Time(int h,int m)
    {
        hours=h;
        minutes=m;
    }
    void addminutes()
    {
        minutes++;
        if(minutes>=60)
        {
            hours++;
            minutes-=60;

        }

    }
void display()
    {
        cout<< hours <<":"<<minutes;

    }

};
int main()
{
    Time t1(2,30);
    t1.addminutes();
    t1.display();
}
