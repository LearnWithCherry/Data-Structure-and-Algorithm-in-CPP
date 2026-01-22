#include <iostream>
using namespace std;
class perimeter{
    public:     
        float length;
        float width;
    perimeter(){
        length = 0;
        width = 0;
    }
    int calc_area(){
        return (length * width);
    }
    int calc_perimeter(){
        return (2 * (length + width));
    }

};
int main() {
    perimeter p1;
    cout << "Length: "; cin >> p1.length; 
    cout << "width: "; cin >> p1.width; 

    cout << "Area: " << p1.calc_area() << endl;
    cout << "Perimeter: " << p1.calc_perimeter() << endl;
    return 0;
}