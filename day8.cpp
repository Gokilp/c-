#include<iostream>
using namespace std;

class Room
{
public:
    int legnth;
    int breath;

    int area()
    {
        return legnth*breath;
    }

}r1,r2;

int main()
{
    cout<<"Enter the Length";
    cin>>r1.legnth;
    cout<<"Enter the breath";
    cin>>r1.breath;
    cout<<"Area is"<<r1.area();
}
