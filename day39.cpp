#include <iostream>
using namespace std;
 class Account {
   public:
   float salary = 60000;
 };
   class Programmer: public Account {
   public:
   float bonus = 5000;
   };
int main(void) {
     Programmer p1;
     Programmer p2;
     cout<<"Salary: "<<p1.salary<<endl;
     cout<<"Bonus: "<<p1.bonus<<endl;
          cout<<"Salary: "<<p2.salary<<endl;
     cout<<"Bonus: "<<p2.bonus<<endl;
    return 0;
}
