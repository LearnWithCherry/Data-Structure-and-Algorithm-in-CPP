#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << endl;
    }
};

int main() {
    Student s1; // first object
    s1.name = "Rajat";
    s1.rollNo = 101;

    Student s2; // second object
    s2.name = "Aman";
    s2.rollNo = 102;

    s1.display();
    s2.display();

    return 0;
}
