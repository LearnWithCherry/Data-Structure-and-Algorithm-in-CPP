#include <iostream>
using namespace std;
class vehical{
    public:
        int speed;
        string brand;
    vehical(string brand, int speed){
        this -> brand = brand;
        this -> speed = speed;
    }
    virtual void display(){
        cout << "Brand: " << brand << endl;
        cout << "speed: " << speed << endl;
    }
};

class car : public vehical{
    public: 
        int seats;

    car(string brand, int speed, int seats) : vehical(brand, speed){
        this -> seats = seats;
    }

    void display()override{
        vehical :: display();
        cout << "Seats: " << seats << endl;
    }
};
int main() {
    car c("Hundai",100,4 );
    c.display();
    return 0;
}