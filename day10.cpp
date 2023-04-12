#include <iostream>
#include <string>
using namespace std;

class student {
private:
    int id;
    string name;

public:
    void setvalue(int s, string n) {
        id = s;
        name = n;
    }
    int getId() { // Getter function for the private member variable id
        return id;
    }
   string getname()
    {
        return name;
    }
};

int main() {
    student s1;
    int s;
    string n;
    cout << "Enter student ID: ";
    cin >> s;
    // Ignore the newline character left in the input stream
    cout << "Enter student name: ";
    cin>>n;
    s1.setvalue(s, n);
    cout << "Student ID: " << s1.getId() << endl;
    cout << "Student Name : " << s1.getname() << endl;

    return 0;
}

