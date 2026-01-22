#include <iostream>
using namespace std;
class student{
    public:
        string name;
        int age;
        int rollNo;
};
int main() {
    student s;
    s.name = "Rajat";
    s.age = 19;
    s.rollNo = 25;
    cout << s.name << " " << s.age << " " << s.rollNo << endl;
    student s1;
    s1.name = "Rohan";
    s1.age = 29;
    s1.rollNo = 21;
    cout << s1.name << " " << s1.age << " " << s1.rollNo << endl;
    return 0;
}