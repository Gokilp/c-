// datatypes
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Integer Value";
    cin>> num;
    cout<<"Integer value is "<<num<<endl;
    cout<<"Size of Integer value is "<<sizeof(num)<<endl;
    cout<<endl;
    cout<<endl;

    char character;
    cout<<"Enter character  Value";
    cin>> character;
    cout<<"character value is "<<int (character)<<endl;
    cout<<"Size of character value is "<<sizeof(character);
     cout<<endl;

     wchar_t letter =L'B';
     cout << "wchar 2bits "<<letter<<endl;
      cout<<"Size of wchar value is "<<sizeof(letter);
      cout<<endl;



    float pi;
    pi = 3.14159f;
    cout << "The value of pi is: " << setprecision(6) << pi;
    cout<<"Size of Decimal value is "<<sizeof(pi);
     cout<<endl;



}

