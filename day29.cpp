#include<iostream>
#include<string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;
public:
    Date(int d=25, int m=01, int y=2004) {
        day = d;
        month = m;
        year = y;
    }
    string getdate() {
        return to_string(day) + "/" + to_string(month) + "/" + to_string(year);
    }
};

class Student {
private:
    string name;
    Date dob;
public:
    Student(string n, int d, int m, int y)
    : name(n), dob(d, m, y) {}
    string getdob() {
        return dob.getdate();
    }
    string getname() {
        return name;
    }
};

int main() {
    Student s1("Gokil", 1, 2, 2003);
    cout << s1.getdob() << endl;
    cout << s1.getname() << endl;
    return 0;
}

