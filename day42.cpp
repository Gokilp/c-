#include<iostream>
using namespace std;
class Employee
{
    private:
    int empId;
    string name;
    double salary;
public:
    Employee(int e,string n,double s=0){
    empId=e;
    name=n;
    salary=s;
    }
    void print()
    {
        cout<<"Employee ID"<<empId<<endl;
        cout<<" Name"<<name<<endl;
        cout<<"salary"<<salary<<endl;
    }
    void setname(string n)
    {
        name=n;
    }
    void setsalary(int s)
    {
        salary=s;
    }
    double getsalary()
    {
        return salary;
    }
  string getname()
    {
       return name;
    }

};
class ContractEmployee:public Employee

{
 private:
    int workHours;
public:
     ContractEmployee(int eId, string n, int wH)
     : Employee(eId, n)
    {
       workHours=wH;
       setsalary();
    }

    void setsalary()
    {
        Employee::setsalary(workHours *100);
    }
    void print()
    {
        Employee::print();
        cout<<"Working Hours"<<  workHours;
    }

};
int main()
{
    Employee e1(123,"Gokil",240000);
    e1.setname("raj");
    e1.getname();
    e1.setsalary(4000);
    e1.getsalary();
   e1.print();
ContractEmployee  c1(12,"gokil",120);
c1.print();

}
