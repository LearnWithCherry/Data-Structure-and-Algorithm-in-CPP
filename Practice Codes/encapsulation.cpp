#include <iostream>
using namespace std;

enum Color { RED, GREEN, BLUE };

int main() {
    Color c1 = GREEN;

    cout << "Value of GREEN: " << c1 << endl;

    if(c1 == GREEN) {
        cout << "Green means Go!" << endl;
    }

    return 0;
}
