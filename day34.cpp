#include<iostream>   //static member Function
using namespace std;
class Room {

private:
 static int roomcount;
    int length;
    int breadth;
public:
    Room(int l,int b)
    {
        length=l;
        breadth=b;
        roomcount++;
    }
    int caluclateArea()
    {
        return length*breadth;
    }
   static int  getroomcount()
    {
        return roomcount;

    }
};
int Room::roomcount=0;
int main()
{
    Room r1(30,20);
    cout<<r1.caluclateArea();
    cout<<Room::getroomcount();
}
