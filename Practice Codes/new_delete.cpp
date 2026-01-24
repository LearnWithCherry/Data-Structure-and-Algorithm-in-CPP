#include <iostream>
using namespace std;

int main() { 
    int* val = new int[10];
    val[0] = 10;

    cout << "Value: " << *val << endl;
    delete val;
    cout << "Value: " << *val << endl;
    return 0;
}