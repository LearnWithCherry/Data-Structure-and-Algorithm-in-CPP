#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;
    d.i = 10;
    cout << "i=" << d.i << endl;
    d.f = 3.14; // overwrites previous value
    cout << "f=" << d.f << endl;
}
