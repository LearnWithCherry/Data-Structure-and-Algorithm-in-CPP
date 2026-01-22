#include <iostream>
using namespace std;
class student{
    private:
        int fee;
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

    return 0;
}
