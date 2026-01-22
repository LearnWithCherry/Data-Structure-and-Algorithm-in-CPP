#include <iostream>
using namespace std;
class teacher{
    private:
        double salary;
    public:
    //properties / attribiute
        string name;
        string dept;
        string subject;
    //method / member funtion 
        void changeDept(string newDept){
            dept   = newDept;
        }
        void salary_teacher(double sal){
            salary = sal;
        }
        double get_salary(){
            return salary;
        }
};
int main() {
    teacher t1;
    t1.name = "XYZ";
    t1.dept = "CSE";
    t1.subject = "CPP";
    t1.salary_teacher(125000);
    cout << t1.name << " " << endl;
    cout << t1.dept << " " << endl;
    cout << t1.subject << " " << endl;
    cout << t1.get_salary() << " " << endl;
    return 0;
}