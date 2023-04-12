#include<iostream>
using namespace std;
class Count
{
private:
    int value;
public:
    Count()
    {
        value=5;
    }
    void operator ++()
    {
        value++;
    }
    void operator ++(int)
    {
        value++;
    }

    int display()
    {
        return value;
    }

};
int  main()
{
    Count count1;
    count1++;
   cout<< count1.display();

    // Call the "void operator ++ ()" function
    ++count1;

   cout<< count1.display();
}
