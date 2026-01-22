#include <iostream>
using namespace std;

inline int square(int x){
    return x * x;
}
int cube (int x){
    return x * x * x;
}
int main() {
    int num = 5;

    cout << "Square of "<< num << " is: "<< square(num) << endl;
    cout << "cube of "<< num << " is: "<< cube(num) << endl;
    return 0;
}