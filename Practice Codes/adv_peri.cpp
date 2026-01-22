#include <iostream>
#include<cmath>
using namespace std;
class Rectangle{
    public: 
        int length;
        int width;

    Rectangle(){
        length = 0;
        width = 0;
    }
    int area_rectangle(){
        return (length * width);
    }
    int Perimeter_rectangle(){
        return (2*(length + width));
    }
    int diagonal_rectangle(){
        return sqrt(length * length + width * width);
    }
};
int main() {
    Rectangle r1;
    cout << "Length: "; cin >> r1.length; 
    cout << "width: "; cin >> r1.width; 

    cout << "Area: " << r1.area_rectangle() << endl;
    cout << "Perimeter: " << r1.Perimeter_rectangle() << endl;
    cout << "Diagonal: " << r1.diagonal_rectangle() << endl;
    return 0;
}