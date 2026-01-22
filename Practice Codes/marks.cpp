#include <iostream>
using namespace std;
class student{
    public:
        string name;
        int rollNo;
        float marks1;
        float marks2;
        float marks3;
    student(){
        name = "";
        rollNo = 0;
        marks1 = 0;
        marks2 = 0;
        marks3 = 0;
    }
    float averge(){
        return ((marks1 + marks2 + marks3) / 3 );
    }
};

int main() {
    student s1;

    cout << "Name: "; cin >> s1.name;
    cout << "Roll Number: "; cin >> s1.rollNo;
    cout << "Enter marks of 3 subjects: "; cin >> s1.marks1 >> s1.marks2 >> s1.marks3 ;
    
    cout << "Total Average is: " << s1.averge();
    return 0;
}