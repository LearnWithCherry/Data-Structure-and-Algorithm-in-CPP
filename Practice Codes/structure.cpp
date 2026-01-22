
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point p1;
    p1.x = 10;
    p1.y = 20;
    cout << "x=" << p1.x << ", y=" << p1.y;
}
